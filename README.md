<h1>DATA+ : First-Year-Project</h1>
<br>
<img src="https://github.com/Deepakg1105/Hello-world/blob/master/csvDemo.gif" alt=".csv demo" style="float: left; margin-right: 10px;" />
<img src="https://github.com/Deepakg1105/Hello-world/blob/master/txtDemo.gif" alt=".txt demo" style="float: left; margin-right: 10px;"/> <br>


<br><br>
<b>Description</b><br>
This was the simple and very easy project I created during my first year(in 2nd sem) of engineering for INSPARK, 2019.The project(program) is to Encrypt the data of any given file. Here the encryption means to make the content of file into unreadable form based which can be done by user through simply setting a pin/password. The user can decrypt the same file by entering the same pin. 
<br><br>
<b>Prerequisites</b><br>
<li>Basic programming concepts.<br>
<li>File handling. 
<br>
<br>
<b>Logic</b>
<br>
The logic is very simple, use the pin/password entered by user, find the sum of all the characters by there ASCII code and then change the content of the file by adding that sum to each and every character of the file. 
<br>
<b>For e.g.</b> : <br>
let say file content is <b><i>“DEEPAK”</i></b>. and let say pin is: <i>1234</i>.<br> 
Now do some maths to change that pin to another number. let’s say 1+2+3+4 = 10 (any other logic can be easily applied like multiplication..),<br>
Then add this newly generated number to each and every character of file. So, new characters(after manipulation) would be<br>
<b>D</b>(68) -> <b>N</b>(78)<br>
<b>E</b>(69) -> <b>O</b>(79)<br>
<b>E</b>(69) -> <b>O</b>(79)<br>
<b>P</b>(80) -> <b>Z</b>(90)<br>
<b>A</b>(65) -> <b>K</b>(75)<br>
<b>K</b>(75) -> <b>U</b>(85)<br><br>
so, the file content will become : <b><i>NOOZKU</i></b>. <br>
(Now you can delete the original file and keep newly encrypted file.)<br>
We will get different content depending on the manipulation we had apply( here we did only addition to every character). <br><br>
Now, <b>Decryption :</b> Do just reverse manipulation.<br>
The file content is <i>“NOOZKU”</i>, ask for user for pin, do maths( what we did during encryption : addition of every digit),and then subtract with each and every character of file's content :<br>
“NOOZKU” => “DEEPAK”. That’s it.
<br><br>
<b>Application :</b> <br>
The project can be used for data privacy for our private files like for file containg passwords for different accounts as many people save them into a file(not easy to remember so many passwords 🤯️).So if some other person finds that, he will not able to recognize what the content is, or will recognise some wrong content!, and the funny part is he/she don’t know that content is in encrypted form. :sunglasses:
<br>
<br>
<b>Warning/Bottleneck :</b><br> Pin/password should be same during encryption time otherwise the content will be converted to some unexpected according to pin enterd as there is no record/history of pin/password inside the program<br>
