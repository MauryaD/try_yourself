#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>

class Quiz{
	int point,point1,point2;
	char A[15];
	int easy();
	int med();
	int diffi();
	public:
	int ptf,p;char name[30];
	void get(int ptf)
	{cout<<"\n enter your name:";gets(name);
	cout<<"\n enter your score:";cin>>p;
		if(p==ptf)
		cout<<"\nQuery OKAY...."<<"\nscore has been saved";
		else
		{cout<<"\n Please enter your current score...";
		cin>>p;}
	}
	void show()
	{cout<<endl<<name<<setw(15)<<p;}
	void play();

	Quiz()                             //constructor
	{point=0,point1=0,point2=0,ptf=0,p=0;
	strcpy(A,"NULL");
	strcpy(name,"NULL");}
	}Q,q;

int Quiz::easy()
{clrscr();
gotoxy(30,1);
textcolor(14);
cprintf("LEVEL 1");
cout<<"\n ****Instructions****";
cout<<endl<<"1. You have to give the answers of the following question.";
cout<<endl<<"2. Here you are going to have questions from general chemistry.";
cout<<endl<<"3. You must have to score atleast 20 points to clear the level.";
cout<<endl<<"4. You can also pass the question if you don not know the anwser.";
cout<<endl<<"5. ### Best of luck ####....";
delay(8000);
clrscr();
gotoxy(30,1);
textcolor(14);
cprintf("LEVEL 1");
cout<<"\n TO PASS THE QUESTION PRESS 'P'.";
cout<<"\n But remember that if you pass question you'll lose 5 points"<<char(5);
cout<<"\n Q1. Which acid is present in Apple.\n";
gets(A);
if(strcmpi(A,"Maelic acid")==0)
{cout<<" you are right...\n";
point+=10;}
	else if(strcmpi(A,"P")==0)
	{cout<<"\n ques passed...";
	point-=5;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q2. Which gas is used to ripen the fruits.\n";
gets(A);
if(strcmpi(A,"Ethene")==0||(strcmpi(A,"Acetylene")==0))
{cout<<" you are right...\n";
point+=10;}
	else if(strcmpi(A,"P")==0)
	{cout<<"\n ques passed...";
	 point-=5;}
else
cout<<"\n you are wrong....plz try next time";
delay(1000);
cout<<"\n Q3. Enter the formula of the cmpd commonly known as Bryta water.\n";
gets(A);
if(strcmpi(A,"Ba(OH)2")==0)
{cout<<" you are right...\n";
point+=10;}
	else if(strcmpi(A,"P")==0)
	{cout<<"\n ques passed...";
	 point-=5;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q4. Which element is most used in skin creams(generally yellowish).\n";
gets(A);
if(strcmpi(A,"Sulphur")==0||(strcmp(A,"S")==0))
{cout<<" you are right...\n";
point+=10;}
	else if(strcmpi(A,"P")==0)
	{cout<<"\n ques passed...";
	point-=5;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q5. The colour of MnO4- ion is.\n";
gets(A);
if(strcmpi(A,"Purple")==0||(strcmpi(A,"violet")==0))
{cout<<" you are right...\n";
point+=10;}
	else if(strcmpi(A,"P")==0)
	{cout<<"\n ques passed...";
	point-=5;}
else
cout<<"\n you are wrong....plz try next time";
return point;
}		//easy ends

int Quiz:: med()	//medium start
{gotoxy(60,24);cout<<"LOADING>>>";
delay(3500);
clrscr();
gotoxy(30,1);
cout<<"LEVEL 2";
cout<<"\n****Instructions****";
cout<<endl<<"1. You have to give the answers of the following question";
cout<<endl<<"2. Here you are going to have questions from Qualitative Analysis.";
cout<<endl<<"3. You must have to score atleast 30 points to clear the level";
cout<<endl<<"4. ### Best of luck ####....";
delay(5500);
clrscr();
gotoxy(30,1);
cout<<"LEVEL 2";
cout<<"\n Q1. Enter the oxidation no. of Fe in brown ring test of nitrate ion.\n";
gets(A);
if(strcmp(A,"+1")==0)
{cout<<" you are right...\n";
point1+=10;}
else
cout<<"\n you are wrong....plz try plz try next time";
cout<<"\n Q2. In test of which ion does we find all the three states of matter.\n";
gets(A);
if(strcmpi(A,"Cl-")==0||(strcmpi(A,"Chloride")==0))
{cout<<" you are right...\n";
point1+=10;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q3. When iodine and starch are mixed the color of solution is.\n";
gets(A);
if(strcmpi(A,"Blue")==0)
{cout<<" you are right...\n";
point1+=10;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q4. What colour of the flame is obtained in the test of BARIUM salt.\n";
gets(A);
if(strcmpi(A,"Green")==0)
{cout<<" you are right...\n";
point1+=10;}
else
cout<<"\n you are wrong....plz try next time";
cout<<"\n Q5. What is colour of sulphide of Cadamium.\n";
gets(A);
if(strcmpi(A,"yellow")==0)
{cout<<" you are right...\n";
point1+=10;}
else
cout<<"\n you are wrong....plz try next time";

return point1;
}    	//medium end..

int Quiz::diffi()
{gotoxy(60,24);cout<<"LOADING>>>";
delay(3500);
clrscr();
gotoxy(30,1);
cout<<"LEVEL 3";
cout<<"\n****Instructions****";
cout<<endl<<"1. You have to give the answers of the following question";
cout<<endl<<"2. Here you are going to have question from P-block.";
cout<<endl<<"3. You must have to score atleast 30 points to clear the level";
cout<<endl<<"4. ### Best of luck ####....";
delay(5500);
clrscr();
gotoxy(30,1);
cout<<"LEVEL 3";
cout<<"\n Q1. The hybirdisation of XeF6 is.\n";
gets(A);
if(strcmpi(A,"sp3d3")==0)
{cout<<" you are right...\n";
point2+=10;}
else
cout<<"\n you are wrong...try next time..";
cout<<"\n Q2. The angel P-P-P in P4 molecule is.\n";
gets(A);
if(strcmpi(A,"60")==0)
{cout<<" you are right...\n";
point2+=10;}
else
cout<<"\n you are wrong...try next time..";
cout<<"\n Q3. The compound known as Butter of tin is:(Write formula).\n";
gets(A);
if(strcmpi(A,"SnCl2")==0)
{cout<<" you are right...\n";
point2+=10;}
else
cout<<"\n you are wrong...try next time..";
cout<<"\n Q4. The strongest acid known to us is.\n";
gets(A);
if(strcmpi(A,"HClO4")==0)
{cout<<" you are right...\n";
point2+=10;}
else
cout<<"\n you are wrong...try next time..";
cout<<"\n Q5. Total number of lone pair in XeF4 are.\n";
gets(A);
if(strcmpi(A,"2")==0)
{cout<<" you are right...\n";
point2+=10;}
else
cout<<"\n you are wrong...try next time..";
return point2;
}

void Quiz::play()
{int p=0,p1=0,p2=0;
p=easy();
cout<<"\nScore after level 1:"<<p;
if(p>=20)
{textcolor(2);
cprintf("\nYups!!...level cleared...!!");
p1=med();
cout<<"\nScore after level 2:"<<p1;
		if(p1>=30)
		{textcolor(3);
		cprintf("\n\t LEVEL CLEARED...!! \t");
		   p2=diffi();
		   cout<<"\nScore after level 3:"<<p2;
		    if(p2>=40)
		    {textcolor(6);
		    cprintf("\n\t LEVEL CLEARED...!! \t");}
		    else
		    {textcolor(4);
		    cprintf("\n\t LEVEL 3 FAIL ");}
		}
		else
		{textcolor(4);
		cprintf("\n\t LEVEL 2 FAIL ");
		}

}
else
{textcolor(4);
cprintf("\nOopss...you lose the game..!!");
}
ptf=p+p1+p2;
delay(3500);
clrscr();
cout<<"\n \t FINAL SCORE="<<ptf;
if(ptf>=120)
{textcolor(GREEN+BLINK);
cprintf("\nCongratulations!!");
cout<<endl<<"You have cleared all the levels very well.";}
	else if((ptf>=90)&&(ptf<120))
	cout<<"\n You played  well.";
	else if(ptf<50)
	cout<<"\n You need to enhance your knowledge";
cout<<"\n remember to save your score";
ofstream f("game.dat",ios::binary|ios::app|ios::out);
Q.get(ptf);
f.write((char*)&Q,sizeof(Q));
f.close();
}             //play ends...

void score()                         //for score list
{ifstream f1("game.dat",ios::binary|ios::in);
while(f1.read((char*)&Q,sizeof(Q)))
Q.show();
f1.close();
}

void logo()                              //for logo
{gotoxy(65,6);cout<<(char)4;
gotoxy(65,7);cout<<(char)4;
gotoxy(66,8);cout<<(char)4;
gotoxy(67,7);cout<<(char)4;
gotoxy(67,6);cout<<(char)4;
gotoxy(66,5);cout<<(char)4;
textcolor(5);cprintf("(Quiz 4)");
gotoxy(68,8);cout<<(char)4; cout<<(char)4;
gotoxy(4,4);}                          //logo end

void start()
{for(int i=0;i<79;i++)
{cout<<'*';
delay(100);
}
for(int j=0;j<25;j++)
{gotoxy(80,j);
cout<<'*';
delay(100);}
for(int k=79;k>0;k--)
{gotoxy(k,25);
cout<<'*';
delay(100);
}
for(int n=25;n>0;n--)
{gotoxy(1,n);
cout<<'*';
delay(100);
}
gotoxy(25,10);
cout<<"Name    :  Deepak Maurya and Prince Khera";
//gotoxy(25,11);
//cout<<"Roll no :  09";
gotoxy(25,12);
cout<<"Class   :  XII-A";
}
void main()
{clrscr();
//start();
delay(3000);
clrscr();
gotoxy(35,1);
textcolor(2);
cprintf("$$  QUIZ 4  $$");cout<<endl;
cout<<"\n Are u ready to experience a awesome gaming....";
cout<<"\n ready....steady....go.........";
delay(1000);
int ch;
logo();
gotoxy(15,7);
do{delay(2000);
cout<<"\n\t+-+-+-MENU-+-+-+-";
cout<<"\n\t| 1. To play\t|";
cout<<"\n\t| 2. Score list\t|";
cout<<"\n\t| 3. To quit\t|";
cout<<"\n\t-----------------";
cout<<"\n\t Enter ur choice";cin>>ch;

switch(ch)
{case 1: Q.play();  break;
case 2:  cout<<"\n\tSCORE LIST";
	 cout<<"\nPlayer's name:"<<setw(10)<<"Score:";
	 score();
	  break;
case 3:  exit(0);
default : cout<<"\n #*^%#$#....wrong input....";delay(1000);
	  cout<<"program is terminating....";
	  delay(2000);
	  exit(0);
}
}while(ch!=3);
getch();
}


