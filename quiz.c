#include<stdio.h>
#include<conio.h>	
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
void displayscore()
{
	char name[20];
	float s;
	FILE*f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&s);
	printf("\n\n\t\t");
	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
	printf("\n\n\t\t");
	fclose(f);
	getch();
}
void credit()
{
system("cls");
printf("\n\n\n\t..........The student of BCA 2078 CCT..........");
printf("\n\n\t ..............Group-[Members]............");
printf("\n\n\t>>> 1. DURGA PANDEY ");
printf("\n\n\t>>> 2. KABITA KHATRI ");
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t *_*");
}
void help()
{
system("cls");
printf("\n\n\n\t This game is very easy to play. You'll be asked some general");
printf("\n\n\t knowledge questions and the right answer is to be choosen among");
printf("\n\n\t the four option provided. Your score will be calculated at the");
printf("\n\n\t tend. Remember that the more quicker you give answer the more");
printf("\n\n\t score you will secure. Your score will be calculated and displayed");
printf("\n\n\t at the end and displayed. If you secure highest score,your score");
printf("\n\n\t will be recorded. So BEST OF LUCK.");
}
void writescore(float score,char plnm[20])
{
float sc;
char nm[20];
FILE*f;
system("cls");
f=fopen("score.txt","r");
fscanf(f,"%s%f",nm,&sc);
if(score>=sc)
{
sc=score;
fclose(f);
f=fopen("score.txt","w");
fflush(stdin);
fprintf(f,"%s\n%.2f",plnm,sc);
fclose(f);
}
}
int main()
{
int countq,countr;
int r,i;
int pa; int nq[6];int w;
float score;
char choice;
char playername[20];
time_t initialtime,finaltime;
system("cls");
//randomize();
mainhome:
system("cls");
puts("\n\t\t*********************** WELCOME TO QUIZ GAME*************************\n\n");
puts("\n\t\t--------------------------------------------");
puts("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>Enter 'S' to start game");
puts("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>Enter 'V' to view high score");
puts("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>Enter 'H' for help");
puts("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>Enter 'C' to view credit and quit game");
printf("\n\t\t-----------------------------------------------------\n\n\t\t");
choice=toupper(getch());
if(choice=='V')
{
displayscore();
goto mainhome;
}
else if(choice=='C')
{
credit();
getch();
}
else if(choice=='H')
{
  help();
getch();
goto mainhome;
}
else if(choice=='S')
{
system("cls");
printf("\n\n\n\t\t\t Enter your good name= ");
scanf("%s",&playername);
home:
system("cls");
initialtime=time(NULL);
countq=countr=0;
i=1;
start:
srand(time(NULL));
r=rand()%16+1;
nq[i]=r;
for(w=0;w<i;w++)
if(nq[w]==r) goto start;
switch(r)
 {
			
case 1:
printf("\n\n\n Q. Where is the tallest bridge of Nepal?");
printf("\n\n A.Modikhola,Parbat \t\tB.Kankai nadi,Jhapa\n\n C.Kanchanpur\t\tD.None\n\n");
countq++;
if(toupper(getch())=='A')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is A.Modikhola,Parbat");
break;
}
case 2:
printf("\n\n\n Q. Which country won the fifa World Cup 2018?");
printf("\n\n A.France\t\tB.Brazil\n\n C.Argentina\t\tD.England\n\n");
countq++;
if(toupper(getch())=='A'){

printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is A.France");
break;
}
case 3:
printf("\n\n\n Q. Which is the international sports competitions that is held only in Nepal?");
printf("\n\n A.Dandi biyo\t\tB.Elephant polo\n\n C.Kabbadi\t\tD.Bull fighting\n\n");
countq++;
if(toupper(getch())=='B')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is B.Elephant polo");break;
}
case 4:
printf("\n\n\n Q. What is the height of Mount Everest in kilometer?");
printf("\n\n A.8.884\t\tB.88.48\n\n C.8848\t\t\tD.8.848\n\n");
countq++;
if(toupper(getch())=='D'){
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is D.8.848km");break;
}
case 5:
printf("\n\n\n Q. According to the 2058 census,which caste of Nepal is in least minority?");
printf("\n\n A.Majhi \t\t B.Chamar \n\n C.Kusunda \t\t D.Routae \n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.Kusunda");break;
}
case 6:
printf("\n\n\n Q. What is the capital of Canada?");
printf("\n\n A.Quebec\t\tB.Toronto\n\n C.Ottawa\t\tD.Madrid\n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.Ottawa");break;
}
case 7:
printf("\n\n\n Q. The UNO was founded at");
printf("\n\n A.London\t\t\tB.Moscow\n\n C.San Francisco\t\tD.Paris\n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.San Francisco");break;
}
case 8:
printf("\n\n\n Q. The home page of a web site is....");
printf ("\n\n A.The largest page\t\t\tB.The last page\n\n C.The most colourful page\t\tD.The first page\n\n");
countq++;	
if(toupper(getch())=='D')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is D.The first page");break;
}
case 9:
printf("\n\n\n Q. Night blindness is cause by lack of which vitamin?");
printf("\n\n A.Vitamin A\t\tB.Vitamin B\n\n C.Vitamin C\t\tD.Vitamin D\n\n");
countq++;
if(toupper(getch())=='A')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is A.Vitamin A");break;
}
case 10:
printf("\n\n\n Q. A chronometer measures...");
printf("\n\n A.Color contrast\t\tB.Sound wave\n\n C.Time\t\t\t\tD.Water waves\n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.Time");break;
}
case 11:
printf("\n\n\n Q. Which is the smallest district of Nepal?");
printf("\n\n A.Lalitpur\t\tB.Karnali\n\n C.Bhaktapur\t\tD.Nawalparasi\n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.Bhaktapur");break;
}
case 12:
printf("\n\n\n Q. Which place of Nepal is known as 'Cherrapunji'?");
printf("\n\n A.Dharan\t\tB.Kathmandu\n\n C.Pokhara\t\tD.Sunwal\n\n");
countq++;
if(toupper(getch())=='C')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is C.Pokhara");break;
}
case 13:
printf("\n\n\n Q. Name the country where there is no mosquito is found?");
printf("\n\n A.Nepal\t\tB.Japan\n\n C.Spain\t\tD.France\n\n");
countq++;
if(toupper(getch())=='D')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is D.France");break;
}
case 14:
printf("\n\n\n Q. The frequency of which of the following is the highest?");
printf("\n\n A.Radio Waves\t\tB.Micro waves\n\n C.Light waves\t\tD.Gamma rays\n\n");
countq++;
if(toupper(getch())=='D')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\nWrong!!! The correct answer is D.Gamma rays");break;
}
case 15:
printf("\n\n\n Q. Into how many categories is the land classified on the basis of productivity?");
printf("\n\n A.Five\t\tB.Four\n\n C.Six\t\tD.Three\n\n");
countq++;
if(toupper(getch())=='B')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\n Wrong!!! The correct answer is B.Four");break;
}
case 16:
printf("\n\n\n Q. Which of the following is actually considered a critical wireless device?");
printf("\n\n A.Access Point\t\tB.WAP\n\n C.WEP\t\t\tD.WLAN\n\n");
countq++;
								
if(toupper(getch())=='A')
{
printf("\n\nCorrect!!!");countr++;break;
}
else
{
printf("\n\n Wrong!!! The correct answer is A.Access Point");break;
}
}
i++;
if(i<=5) goto start;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if(score<0) score=0;
printf("\n\n\n Your Score:%.2f",score);
if(score==100) printf("\n\nEXCELLENT!!!KEEP IT UP");
else if(score>=80 && score<100) printf("\n\n***************VERY GOOD!!*******");
else if(score>=60 && score<80) printf("\n\n****************GOOD! BUT YOU NEED TO KNOW MORE.");
else if(score>=40 && score<60) printf("\n\n****************SATISFACTORY RESULT,BUT THIS MUCH IS NOT SUFFICIENT.");
else printf("\n\n**********************YOU ARE VERY POOR IN G.K.,WORK HARD");
puts("\n\n\n\n*************************DO YOU WANT TO PLAY AGAIN?(YES/NO)");
if(toupper(getch())=='Y')
goto home;
else
{
writescore(score,playername);
goto mainhome;
}
}
else
{
printf("\n\n\t\t Enter the right key\n\n\t\t");
Sleep(700);
goto mainhome;
}
return 0;
}




