#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0;
	char ch1[100];
	char ch2;
	clrscr();
	printf("Welcome Guest Enter Your Name\n");
	scanf("%s",ch1);
	printf("Welcome %s.Do well.All the best.",ch1);
	printf("\nEnter answer in form of 'a','b' and'c'only.");
	printf("\n\n1.C program was invented by? \na.Dennis Ritche \nb.Charles Babage \nc.Ritchman\n");
	if(ch2=(getch())=='a')
	{
		x=x+10;
		goto nx;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();
	clrscr();
	nx:
	printf("\n2.The programm statements are enclosed within? \na.'( )'\nb.'* *' \nc.'{ }'\n");
	if(ch2=(getch())=='c')
	{
		x=x+10;
		goto nx1;
	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx1:
	printf("\n3.Father of computer? \na.Ritchman \nb. Charles Babage\nc.Dennis Ritche\n");
	if(ch2=(getch())=='b')
	{
		x=x+10;
		goto nx2;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx2:
	printf("\n4.Number of looping statements present in C Language'? \na.1 \nb.3\nc.2\n");
	if(ch2=(getch())=='b')
	{
		x=x+10;
		goto nx3;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx3:
	printf("\n5.DO while is a ? \na.exit check loop \nb.entry check loop\nc.not a checking loop\n");
	if(ch2=(getch())=='a')
	{
		x=x+10;
		goto nx4;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx4:
	printf("\n6.Which one is the first 64 bit operating system? \na.linux\nb.windows Xp\nc.Mac\n");
	if(ch2=(getch())=='a')
	{
		x=x+10;
		goto nx5;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx5:
	printf("\n7.Computer hard disc was first introduced in 1956 by? \nA.Dell \nb.MAC \nc.IBM\n");
	if(ch2=(getch())=='c')
	{
		x=x+10;
		goto nx6;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx6:
	printf("\n8.Which of the following is not a web browser? \na.Mosaic \nb.Facebook\nc.WWW\n");
	if(ch2=(getch())=='b')
	{
		x=x+10;
		goto nx7;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx7:
	printf("\n9.In computer world TROJEN refer to? \na.Malware \nb.Spy ware \nc.Virus\n");
	if(ch2=(getch())=='a')
	{
		x=x+10;
		goto nx8;

	}
	else
	printf("Sorry wrong answer.press any key to continue");
	getch();clrscr();
	nx8:
	printf("\n10.Which of the following is a programming language? \na.FTP \nb.HTML \nc.HPML\n");
	if(ch2=(getch())=='c')
	{
		x=x+10;
	}
	else
	printf("Sorry wrong answer.\nPress any key to see the result");
	getch();clrscr();
	printf("Hello %s your score is %d/100",ch1,x);
	if(x==100)
	printf("\nYou are the WINNER of the day.");
	if(x==90)
	printf("\nYou are extremely intelligent\nYour Score is 90");
	if(x==80)
	printf("\nYou are intelligent\nYour Score is 80");
	if(50==x||x==70||x==60)
	printf("\nYou are averageYour Score is %d.Better luck next time");
	else if(x<=40)
	printf("do your best next time.dont loose your hope");
	getch();
}

