// This program is created by shadow leaked
#include<iostream.h>
#include<dos.h>
//dos.h is for delay, sound and nosound function.
#include<conio.h>

	void main()
{
	clrscr(); // To clear the screen.
int x;
cout<<"\nEnter password for security purpose\n\n";
cin>>x;
delay(1000);
if(x==888)
	{
	cout<<"\nA"; delay(500);
	cout<<"C"; delay(500);
	cout<<"C"; delay(500);
	cout<<"E"; delay(500);
	cout<<"S"; delay(500);
	cout<<"S"; delay(500);
	cout<<" "; delay(400);
	cout<<"G"; delay(500);
	cout<<"R"; delay(500);
	cout<<"A"; delay(500);
	cout<<"N"; delay(500);
	cout<<"T"; delay(500);
	cout<<"E"; delay(500);
	cout<<"D"; delay(500);
	delay(2000);
cout<<"\n\nWelcome back Captain\n"; // Output command
	delay(2000); // Making the system delay for 1 sec
cout<<"\nAll system initializing ";
	delay(1000);
cout<<".";
	{sound(800); delay(500); nosound();}
       delay(500);
cout<<".";
	 {sound(800); delay(500); nosound();}
	delay(500);
cout<<". \n";
	{sound(800); delay(500); nosound();}
cout<<"\nJarvis is online sir\n";
	delay(1600);
cout<<"\nWaiting for your command\n";
}                    else{cout<<"Access Denied";}
	getch();
}
