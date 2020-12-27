#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int makepin(int p)
{
    int sum=0,k,i;
    for(i=0;i<4;i++)
    {
    k=p;
     p=p/10;
     sum=sum+(k%10);
    }
    return (sum);
}
struct data
{
    char name[20];
    char USN[10];
};
int main()
{
  FILE *fp,*fs,*ft;
  int j,line_number,continue_choice,read_choice,i,num_of_students,pin1,pin2,pin;
  char file_name[20], choice,myfile[20],ch,writedata[100],copydata[100];

        printf("\n\t......WELCOME  TO  DATA+ .....\n\n");
        printf("Using this Application you can\n\n");
        printf("1. Read the Data of a File\t\t2. Create a New File\n\n");
        printf("\t     3. Add some content to a existing file\n\n4. ENCRYPT the Data of a File\t\t5. DECRYPT the Data of a File\n\n");
        for(j=0;j<10;j++)
        {
            printf("\n   What do you Want .....\n");
            printf("Press\n R for reading the content of a file\t\t W for creating a NEW file\n\n\t\t M for ADD some content to existing file\n\n");
            printf(" E for make a Encrypt file of a existing file\t D for make a Decrypt file of existing file\n\n");
            scanf("%c",&choice);


            switch(choice)
            {
            case 'R' :
            case 'r' :
                printf("Enter the file name you want to READ\n");
                scanf("%s",&file_name);
                fp=fopen(file_name,"r");
                if(fp==NULL)
                {
                    printf("File CANNOT open\n");
                }
                else
                {
                    printf("Do you want to see All the content of File from starting\t\tOR from a specific line......\n\n");
                    printf("  Press\n 1 for All content\t\t 2 for reading from a particular line\n ");
                    scanf("%d",&read_choice);

                    if(read_choice==2)
                    {
                        printf("Enter Line Number from where you want to read\n");
                        scanf("%d",&line_number);

                        int count=0;
                        char line[100];
                        while(fgets(line,90,fp)!=NULL)
                        {
                            if(count==line_number-1)
                                printf("%s",line);
                            else
                                count++;
                        }
                        fclose(fp);
                    }
                    else
                    {
                        ch=fgetc(fp);
                        while(!feof(fp))
                        {

                            printf("%c",ch);
                            ch=fgetc(fp);
                        }
                        fclose(fp);
                    }
                }
                    break;

            case 'W':
            case 'w':
                printf("\n\nEnter the file Name you want to create\n");
                scanf("%s",&file_name);
                int write_choice;

                printf("Do you want that this file %s should contain Student Record\n",file_name);
                printf("press 1 for yes\n");
                scanf("%d",&write_choice);
                if(write_choice==1)
                {
                printf("This file contains the student-data i.e. student name and student-USN\n");
                printf("enter number of students\n");
                scanf("%d",&num_of_students);
            struct data students[100],*p,s1[100][100];;
            printf("Enter Data\nName\t USN\n");
            for(i=0;i<num_of_students;i++)
            {
                printf("Enter for student %d\n",i+1);
                scanf("%s%s",&students[i].name,&students[i].USN);
            }
            p=(struct data *)malloc(100*sizeof(struct data));
            p=&students;
            printf("S.no.\tstudent Name\tUSN\n");
            sprintf(s1,"S.No.\tStudent Name\tUSN\n");
            fp=fopen(file_name,"a");
            fputs(s1,fp);
           // fclose(fp);
            for(i=0;i<num_of_students;i++)
            {
                printf("%-5d\t%-12s\t%s\n",i+1,(*(i+p)).name,(*(i+p)).USN);
                sprintf(s1[i],"%-5d\t%-12s\t%s\n",i+1,(*(i+p)).name,(*(i+p)).USN);
             //   fp=fopen(file_name,"a");
                fputs(s1[i],fp);
                fflush(stdin);
                //fclose(fp);
            }
               fclose(fp);
            }
            else
            {
            int value=1;
           fp= fopen(file_name,"w");
            while(value)
            {
            printf("Enter the data whatever you want\n");
          //  gets(writedata);
            scanf("%s",&writedata);
            sprintf(copydata,"%s\t",writedata);
          //  fp=fopen(file_name,"w");
            fputs(copydata,fp);
         //   fputs("\t",fp);
            fflush(fp);
          //  fclose(fp);
            printf("want to enter more data\n");
            printf("press zero 0 for NO.....\n");
            scanf("%d",&value);
            }
            fputs("\n",fp);

            fclose(fp);
            }

            break;
            case 'M':
            case 'm':
                printf("Enter the file name to modify or Add Data\n");
                scanf("%s",&file_name);

                printf("Does this file %s contains DATA of Students i.e. Name and USN\n");
                printf("press 1 if yes\n");
                scanf("%d",&i);
                if(i==1)
                {
		        printf("Enter number of students to be added\n");
		        scanf("%d",&num_of_students);
		        fp=fopen(file_name,"a");
		        if(fp==NULL)
		        {
		            printf("File CANNOT open\n");
			    break;
		        }
		        else
		        {
		            struct data students[100],*p,s1[100][100];
		            for(i=0;i<num_of_students;i++)
		            {
		                printf("Enter ...\n");
		                scanf("%s%s",&students[i].name,&students[i].USN);
		            }
		            p=(struct data *)malloc(100*sizeof(struct data));
		            p=&students;
		            printf("The Data Added is....\n");
		            printf("S.No.\tstudent-Name\tUSN\n");
		            for(i=0;i<num_of_students;i++)
		            {
		                printf("%-5d\t%-12s\t%s\n",i+1,(*(p+i)).name,(*(p+i)).USN);
		                sprintf(s1[i],"%-5d\t%-12s\t%s\n",i+1,(*(p+i)).name,(*(p+i)).USN);
		                fputs(s1[i],fp);
		                fflush(stdin);

		            }
		            fclose(fp);
		        }
                }
                else
                {
                   int value=1;
                   fp=fopen(file_name,"a");
                    while(value)
                    {
                    printf("Enter the data whatever you want\n");
                 //   gets(writedata);
                    scanf("%s",&writedata);
                    sprintf(copydata,"%s\t",writedata);
                   // fp=fopen(file_name,"a");
                    fputs(copydata,fp);
                   /// fputs("\t",fp);
                    fflush(fp);
                  //  fclose(fp);
                    printf("want to enter more data\n");
                    printf("press zero 0 for NO.....\n");
                    scanf("%d",&value);
                    }
                  fputs("\n",fp);
                  fclose(fp);
                }

                break;
            case 'E':
            case 'e':
                printf("Enter the File name to be ENCRYPRTed\n");
                scanf("%s",&file_name);
                printf("Enter the 4 Digit PIN to encrypt\n");
                scanf("%d",&pin1);
                printf("reenter the pin to confirm...\n");
                scanf("%d",&pin2);
                if(pin1!=pin2)
                {
                    printf("confirmation pin is NOT matching\n");
		    break;
                }
                else
                {
                    pin=makepin(pin1);
                    printf("Enter the name of new file\( which will be encryped version of original file \) \n");
                    scanf("%s",&myfile);
                    fs=fopen(file_name,"r");
                    ft=fopen(myfile,"w");
                    if(fs==NULL || ft==NULL)
                    {
                        printf("File CANNOT open\n");
			break;
                    }
                    else
                    {

                        while(!feof(fs))
                        {

                            ch=fgetc(fs);
                            fputc(ch+pin,ft);
                        }
                    }
                fclose(fs);
                fclose(ft);

                }
                printf("The Encryption of Your file is SUCCESSFULLY done\n Your Encrypted file is %s..\n",myfile);
                break;
            case 'D':
            case 'd':
                printf("Enter the file name to be Decrypted\n");
                scanf("%s",&file_name);
                printf("Enter the 4 Digit PIN\n");
                scanf("%d",&pin1);
                pin=makepin(pin1);
                printf("Enter the File name of NEW file which will be decrypted version of file entered\n");
                scanf("%s",&myfile);
                fs=fopen(file_name,"r");
                ft=fopen(myfile,"w");
                if(fs==NULL || ft==NULL)
		{
                    printf("File CANNOT open\n");
		    break;
		}
                else
                {
                    while(!feof(fs))
                    {

                        ch=fgetc(fs);
                        fputc(ch-pin,ft);
                        fflush(stdin);
                    }
                }
                fclose(fs);
                fclose(ft);
                printf("The Decryption of file SUCCESSFULLY done\nYour Decrypted file is %s..\n",myfile);
                break;
            default :
                printf("\n\t......SORRY  ....... WE CANNOT FULFILL YOUR CHOICE.......\n");


            }
            printf("\n\n  ....want to CONTINUE.....\n");
            printf("press 1 for yes\n");
            scanf("%d",&continue_choice);
            if(continue_choice!=1)
            {
                break;
            }
            else
            {
                printf("\n   What do you Want .....\n");
            printf("     Press\n R for reading the content of a file\t\t W for creating a NEW file\n\n\t M for ADD some content to existing file\n\n\n");
            printf("E for make a Encrypt file of a existing file\t\t D for make a Decrypt file of existing file\n\n");
            scanf("%c",&choice);
            }

        }
        printf("\t.......THANKING YOU  from  DATA+  .......\n");
        return 0;
}
