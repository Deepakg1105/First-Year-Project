First-Year-Project 

#Description: 
This was the simple and very easy project I created during my first year(in 2nd sem) of engineering for INSPARK, 2019.The project(program) is to Encrypt the data of any given file. Here the encryption means to make the content of file into unreadable form based which can be done by user through simply setting a pin/password. The user can decrypt the same file by entering the same pin. 

#Prerequisites : 
=>Basic programming concepts. =>File handling . 

#Logic : The logic is very simple, use the pin/password entered by user, find the sum of all the characters by there ASCII code and then change the content of the file by adding that sum to each and every character of the file. 
For e.g. : let say file content is “DEEPAK”. and let say pin is: 1234. Now do some mathematics to change that pin to another number. let’s say 1+2+3+4 = 10 (any other logic can be easily applied like multiplication..), then add this newly generated number to each and every character of file. So, character ASCII New characters(after manipulation) D 68 -> N (78) E 69 -> O (79) E 69 -> O (79) P 80 -> Z (90) A 65 -> K (75) K 75 -> U (85), so, the file content will become : NOOZKU. We will get different content depending on the manipulation we will apply( here we did addition to every character). 
Now, decryption : Do just reverse manipulation( according to what we did during encryption). The file content is “NOOZKU”, ask for user for pin, do mathematics( what we did during encryption : addition of every digit),and then subtract with each and every character of file content : “NOOZKU” => “DEEPAK”. That’s it.

#Application : 
The project can be used for data privacy for our private files like for file containg passwords for different accounts as many people saves them into a file(not easy to remember so many passwords).So if some other person finds that, he will not able to recognize what the content is, or some wrong content!, and the funny part is he/she don’t know that content is in encrypted form. 

#Warning/Bottleneck : Pin/password should be same during encryption time otherwise the content will be converted to some unexpected according to pin enterd as there is no record/history of pin/password inside the program
