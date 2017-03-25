#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<fstream.h>
#include<direct.h>
void Q1();

void main()
{
 ofstream fout;
 char name[50];
 int i,j,age;
 clrscr();
 for(j=2;j>0;j--)
 {
  for(i=0;i<=300;++i)
  {
   sound(i);
   delay(10);
   if(j==2)
   {
   gotoxy(38,12);
   textcolor(25 + BLINK);
   cprintf(" Welcome ");
   gotoxy(42,13);
   textcolor(28 + BLINK);
   cprintf("To");
   }
   if(j==1)
   {
   gotoxy(33,14);
   textcolor(34 + BLINK);
   cprintf("Saddi Chhoti si Quiz");
   nosound();
   delay(10);
   for(i=299;i>25;--i)
    {
     sound(i);
     delay(10);
    }
    break;
   }
  }
  delay(1000);
 }
 nosound();
 gotoxy(32,20);
 cout<<"By--"<<" SACHIN ARTANI";
 delay(1000);
 clrscr();
 gotoxy(20,12);
 textcolor(15);
 cprintf("Enter your name:");
 gets(name);
 mkdir("c:/game");
 fout.open("c:/game/player");
 fout<<"Username: "<<name;
 gotoxy(20,14);
 cprintf("Enter your age:");
 cin>>age;
 fout<<"\nUserAge: "<<age;
 fout.close();
 clrscr();
 gotoxy(38,2);
 textcolor(12);
 cprintf("Rules:\n\n");
 gotoxy(1,5);
 textcolor(15);
 cprintf("1. Give the correct answer to get scores.\n");
 gotoxy(1,6);
 cprintf("2. Five points per correct answer.\n");
 gotoxy(1,7);
 cprintf("3. Deduction of three marks per incorrect answer.\n");
 gotoxy(1,8);
 cprintf("4. Give incorrect answers to make score 0 and you will be out.\n");
 gotoxy(30,10);
 cprintf("Press any key To Continue:");
 getch();
 clrscr();
 Q1();
}
void invalid();
void showWinner(int);
void showLoser(int);
void countQ1(int);
void Q2(int);
void Q1()
{
 int n;
 int score=0;
 gotoxy(65,2);
 printf("Your Score: %d",score);
 gotoxy(5,5);
 textcolor(15);
 cprintf("Q.1) Who is the writer of story \"Half Girlfriend\" ?");
 gotoxy(5,7);
 cprintf("\n1. Chetan Bhagat");
 gotoxy(5,8);
 cprintf("\n2. Sachin Artani");
 gotoxy(5,9);
 cprintf("\n3. Sudeep Nagarkar");
 gotoxy(5,10);
 cprintf("\n4. Ravindar Singh");
 countQ1(score);
 clrscr();
}
void countQ1(int score)
{
 int i,n;
 A1: gotoxy(5,13);
 cprintf("Enter your choice:");
 cscanf("%d",&n);
 if(n==1)
 {
  score=score+5;
  gotoxy(35,17);
  printf("Correct Answer");
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Your Score:"<<score<<"\nYou were on the first question";
  fout.close();
  delay(2000);
  Q2(score);
 }
 else if(n==2||n==3||n==4)
 {
  gotoxy(35,17);
  printf("Wrong Answer");
  delay(500);
  showLoser(score);
 }
 else
 {
 invalid();
 goto A1;
 }
}
void countQ2(int);
void Q2(int score)
{
 clrscr();
 gotoxy(65,2);
 printf("Your Score: %d",score);
 gotoxy(5,5);
 textcolor(15);
 cprintf("Q.2) Who is the writer of the story \"When Dreams Comes True\" ?");
 gotoxy(5,7);
 cprintf("\n1. Chetan Bhagat");
 gotoxy(5,8);
 cprintf("\n2. Sachin Artani");
 gotoxy(5,9);
 cprintf("\n3. Sudeep Nagarkar");
 gotoxy(5,10);
 cprintf("\n4. Ravinder Singh");
 gotoxy(5,12);
 countQ2(score);
}
void Q3(int);
void countQ2(int score)
{
 int i,n;
 A2: gotoxy(5,13);
 cprintf("Enter your choice:");
 cscanf("%d",&n);
 if(n==2)
 {
  score=score+5;
  gotoxy(35,17);
  printf("Correct!");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the second question";
  fout.close();
  Q3(score);
 }
 else if(n>4)
 {
 invalid();
 goto A2;
 }
 else
 {
  score=score-3;
  gotoxy(35,17);
  printf("Wrong Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the second question";
  fout.close();
  Q3(score);
 }
 getch();
}
void countQ3(int);
void Q3(int score)
{
 clrscr();
 gotoxy(65,2);
 printf("Your Score: %d",score);
 gotoxy(5,5);
 textcolor(15);
 cprintf("Q.3) Who is the CEO of Facebook?");
 gotoxy(5,7);
 cprintf("\n1. Sundar pichai");
 gotoxy(5,8);
 cprintf("\n2. Mark Zuckerburg");
 gotoxy(5,9);
 cprintf("\n3. Tim cooks");
 gotoxy(5,10);
 cprintf("\n4. Satya nadela");
 gotoxy(5,12);
 countQ3(score);
}
void Q4(int);
void countQ3(int score)
{
 int i,n;
 A3: gotoxy(5,13);
 cprintf("Enter your choice:");
 cscanf("%d",&n);
 if(n==2)
 {
  score=score+5;
  gotoxy(35,17);
  printf("Correct Answer..");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the third question";
  fout.close();
  Q4(score);
 }
 else if(score<=3)
 {
  showLoser(score);
 }
 else if(n>4)
 {
 invalid();
 goto A3;
 }
 else
 {
  score=score-3;
  gotoxy(35,17);
  printf("Wrong Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the third question";
  fout.close();
  Q4(score);
 }
 getch();
}
void countQ4(int);
void Q4(int score)
{
 clrscr();
 gotoxy(65,2);
 printf("Your Score: %d",score);
 gotoxy(5,5);
 textcolor(15);
 cprintf("Q.4) Who is the CEO of Google?");
 gotoxy(5,7);
 cprintf("\n1. Sundar pichai");
 gotoxy(5,8);
 cprintf("\n2. Mark Zuckerburg");
 gotoxy(5,9);
 cprintf("\n3. Tim cooks");
 gotoxy(5,10);
 cprintf("\n4. Satya nadela");
 gotoxy(5,12);
 countQ4(score);
}
void Q5(int);
void countQ4(int score)
{
 int i,n;
 A4: gotoxy(5,13);
 cprintf("Enter your choice:");
 cscanf("%d",&n);
 if(score<=3)
 {
 showLoser(score);
 }
 if(n==1)
 {
  score=score+5;
  gotoxy(35,17);
  printf("Excellent Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the fourth question";
  fout.close();
  Q5(score);
 }
 else if(n>4)
 {
  invalid();
  goto A4;
 }
 else
 {
  score=score-3;
  gotoxy(35,17);
  printf("Wrong Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the fourth question";
  fout.close();
  Q5(score);
 }
}
void countQ5(int);
void Q5(int score)
{
 clrscr();
 gotoxy(65,2);
 printf("Your Score: %d",score);
 gotoxy(5,5);
 textcolor(15);
 cprintf("Q.5) Who developed world wide web (WWW)?");
 gotoxy(5,7);
 cprintf("\n1. Kevin Thompson");
 gotoxy(5,8);
 cprintf("\n2. Bjarne Stroustroup");
 gotoxy(5,9);
 cprintf("\n3. Dennis Ritchie");
 gotoxy(5,10);
 cprintf("\n4. Sir Tim Berners Lee");
 gotoxy(5,12);
 countQ5(score);
}
void countQ5(int score)
{
 int i,n;
 A5: gotoxy(5,13);
 cprintf("Enter your choice:");
 cscanf("%d",&n);
 if(score<=3)
 {
 showLoser(score);
 }
 if(n==4)
 {
  score=score+5;
  gotoxy(35,17);
  printf("Superb Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the fifth question";
  fout.close();
  if(score>=15)
  showWinner(score);
  else
  showLoser(score);
 }
 else if(n>4)
 {
  invalid();
  goto A5;
 }
 else
 {
  score=score-3;
  //Q5(score);
  gotoxy(35,17);
  printf("Wrong Answer");
  delay(2000);
  ofstream fout;
  fout.open("c:/game/score");
  fout<<"Score:"<<score<<"\nYou were on the fifth question and You won!\n\t\t\t\tCongrats!!!";
  fout.close();
  showLoser(score);
 }
}
void showWinner(int score)
{
 clrscr();
 gotoxy(30,13);
 textcolor(23 + BLINK);
 cprintf("You win & Your score is %d",score);
}
void showLoser(int score)
{
 clrscr();
 if(score<1)
 score=0;
 gotoxy(30,13);
 printf("You lose & Your score is %d",score);
}
void invalid()
{
 clrscr();
 gotoxy(30,13);
 cprintf("Invalid Choice");
 delay(2000);
}