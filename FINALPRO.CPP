#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include "framework.c"
#include "printpiece.c"
#include "diceroll.c"
void R1(int diceroll);
void R2(int diceroll);
void R3(int diceroll);
void R4(int diceroll);
void G1(int diceroll);
void G2(int diceroll);
void G3(int diceroll);
void G4(int diceroll);
void Y1(int diceroll);
void Y2(int diceroll);
void Y3(int diceroll);
void Y4(int diceroll);
void B1(int diceroll);
void B2(int diceroll);
void B3(int diceroll);
void B4(int diceroll);
void red();
void green();
void blue();
void yellow();
int posx_r1=-45;
int posy_r1=195;
int posx_r2=-45;
int posy_r2=195;
int posx_r3=-45;
int posy_r3=195;
int posx_r4=-45;
int posy_r4=195;
int posx_g1=-255;
int posy_g1=45;
int posx_g2=-255;
int posy_g2=45;
int posx_g3=-255;
int posy_g3=45;
int posx_g4=-255;
int posy_g4=45;
int posx_y1=-405;
int posy_y1=255;
int posx_y2=-405;
int posy_y2=255;
int posx_y3=-405;
int posy_y3=255;
int posx_y4=-405;
int posy_y4=255;
int posx_b1=-195;
int posy_b1=405;
int posx_b2=-195;
int posy_b2=405;
int posx_b3=-195;
int posy_b3=405;
int posx_b4=-195;
int posy_b4=405;
int reset_r1=0;
int reset_r2=0;
int reset_r3=0;
int reset_r4=0;
int reset_g1=0;
int reset_g2=0;
int reset_g3=0;
int reset_g4=0;
int reset_b1=0;
int reset_b2=0;
int reset_b3=0;
int reset_b4=0;
int reset_y1=0;
int reset_y2=0;
int reset_y3=0;
int reset_y4=0;
int home_red=0;
int home_green=0;
int home_blue=0;
int home_yellow=0;
void check_R(int x,int y){
    if(x==posx_g1)
    {
	if(y==posy_g1)
	{
		posx_g1=-30;
		reset_g1=1;
		}
	}
	 if(x==posx_g2)
    {
	if(y==posy_g2)
	{
		posx_g2=-30;
		reset_g2=1;
		}
	}
	 if(x==posx_g3)
    {
	if(y==posy_g3)
	{
		posx_g3=-30;
		reset_g3=1;
		}
	}
	 if(x==posx_g4)
    {
	if(y==posy_g4)
	{
		posx_g4=-30;
		reset_g4=1;
		}
	}
	 if(x==posx_y1)
    {
	if(y==posy_y1)
	{
		posx_y1=-30;
		reset_y1=1;
		}
	}
	 if(x==posx_y2)
    {
	if(y==posy_y2)
	{
		posx_y2=-30;
		reset_y2=1;
		}
	}
	 if(x==posx_y3)
    {
	if(y==posy_y3)
	{
		posx_y3=-30;
		reset_y3=1;
		}
	}
	 if(x==posx_y4)
    {
	if(y==posy_y4)
	{
		posx_y4=-30;
		reset_y4=1;
		}
	}
	 if(x==posx_b1)
    {
	if(y==posy_b1)
	{
		posx_b1=-30;
		reset_b1=1;
		}
	}
	 if(x==posx_b2)
    {
	if(y==posy_b2)
	{
		posx_b2=-30;
		reset_b2=1;
		}
	}
	 if(x==posx_b3)
    {
	if(y==posy_b3)
	{
		posx_b3=-30;
		reset_b3=1;
		}
	}
	 if(x==posx_b4)
    {
	if(y==posy_b4)
	{
		posx_b4=-30;
		reset_b4=1;
		}
	}
}
void check_G(int x,int y){
    if(x==posx_r1)
    {
	if(y==posy_r1)
	{
		posx_r1=-30;
		reset_r1=1;
		}
	}
	 if(x==posx_r2)
    {
	if(y==posy_r2)
	{
		posx_r2=-30;
		reset_r2=1;
		}
	}
	 if(x==posx_r3)
    {
	if(y==posy_r3)
	{
		posx_r3=-30;
		reset_r3=1;
		}
	}
	 if(x==posx_r4)
    {
	if(y==posy_r4)
	{
		posx_r4=-30;
		reset_r4=1;
		}
	}
	 if(x==posx_y1)
    {
	if(y==posy_y1)
	{
		posx_y1=-30;
		reset_y1=1;
		}
	}
	 if(x==posx_y2)
    {
	if(y==posy_y2)
	{
		posx_y2=-30;
		reset_y2=1;
		}
	}
	 if(x==posx_y3)
    {
	if(y==posy_y3)
	{
		posx_y3=-30;
		reset_y3=1;
		}
	}
	 if(x==posx_y4)
    {
	if(y==posy_y4)
	{
		posx_y4=-30;
		reset_y4=1;
		}
	}
	 if(x==posx_b1)
    {
	if(y==posy_b1)
	{
		posx_b1=-30;
		reset_b1=1;
		}
	}
	 if(x==posx_b2)
    {
	if(y==posy_b2)
	{
		posx_b2=-30;
		reset_b2=1;
		}
	}
	 if(x==posx_b3)
    {
	if(y==posy_b3)
	{
		posx_b3=-30;
		reset_b3=1;
		}
	}
	 if(x==posx_b4)
    {
	if(y==posy_b4)
	{
		posx_b4=-30;
		reset_b4=1;
		}
	}
}
void check_Y(int x,int y){
    if(x==posx_g1)
    {
	if(y==posy_g1)
	{
		posx_g1=-30;
		reset_g1=1;
		}
	}
	 if(x==posx_g2)
    {
	if(y==posy_g2)
	{
		posx_g2=-30;
		reset_g2=1;
		}
	}
	 if(x==posx_g3)
    {
	if(y==posy_g3)
	{
		posx_g3=-30;
		reset_g3=1;
		}
	}
	 if(x==posx_g4)
    {
	if(y==posy_g4)
	{
		posx_g4=-30;
		reset_g4=1;
		}
	}
	 if(x==posx_r1)
    {
	if(y==posy_r1)
	{
		posx_r1=-30;
		reset_r1=1;
		}
	}
	 if(x==posx_r2)
    {
	if(y==posy_r2)
	{
		posx_r2=-30;
		reset_r2=1;
		}
	}
	 if(x==posx_r3)
    {
	if(y==posy_r3)
	{
		posx_r3=-30;
		reset_r3=1;
		}
	}
	 if(x==posx_r4)
    {
	if(y==posy_r4)
	{
		posx_r4=-30;
		reset_r4=1;
		}
	}
	 if(x==posx_b1)
    {
	if(y==posy_b1)
	{
		posx_b1=-30;
		reset_b1=1;
		}
	}
	 if(x==posx_b2)
    {
	if(y==posy_b2)
	{
		posx_b2=-30;
		reset_b2=1;
		}
	}
	 if(x==posx_b3)
    {
	if(y==posy_b3)
	{
		posx_b3=-30;
		reset_b3=1;
		}
	}
	 if(x==posx_b4)
    {
	if(y==posy_b4)
	{
		posx_b4=-30;
		reset_b4=1;
		}
	}
}
void check_B(int x,int y){
    if(x==posx_g1)
    {
	if(y==posy_g1)
	{
		posx_g1=-30;
		reset_g1=1;
		}
	}
	 if(x==posx_g2)
    {
	if(y==posy_g2)
	{
		posx_g2=-30;
		reset_g2=1;
		}
	}
	 if(x==posx_g3)
    {
	if(y==posy_g3)
	{
		posx_g3=-30;
		reset_g3=1;
		}
	}
	 if(x==posx_g4)
    {
	if(y==posy_g4)
	{
		posx_g4=-30;
		reset_g4=1;
		}
	}
	 if(x==posx_y1)
    {
	if(y==posy_y1)
	{
		posx_y1=-30;
		reset_y1=1;
		}
	}
	 if(x==posx_y2)
    {
	if(y==posy_y2)
	{
		posx_y2=-30;
		reset_y2=1;
		}
	}
	 if(x==posx_y3)
    {
	if(y==posy_y3)
	{
		posx_y3=-30;
		reset_y3=1;
		}
	}
	 if(x==posx_y4)
    {
	if(y==posy_y4)
	{
		posx_y4=-30;
		reset_y4=1;
		}
	}
	 if(x==posx_r1)
    {
	if(y==posy_r1)
	{
		posx_r1=-30;
		reset_r1=1;
		}
	}
	 if(x==posx_r2)
    {
	if(y==posy_r2)
	{
		posx_r2=-30;
		reset_r2=1;
		}
	}
	 if(x==posx_r3)
    {
	if(y==posy_r3)
	{
		posx_r3=-30;
		reset_r3=1;
		}
	}
	 if(x==posx_r4)
    {
	if(y==posy_r4)
	{
		posx_r4=-30;
		reset_r4=1;
		}
	}
}
void red()
	{
		setcolor(RED);
	printf("\n \n IT IS NOW TURN RED PLAYER \n YOUR DICE IS ROLLING");
	if(home_red==4)
	{
		printf("\n you have already finished the game red player");
	}
	if(home_red==4 && home_green==4 && home_blue==4 && home_yellow==4)
	{
		clrscr();
		setcolor(0);
		outtextxy(300,300,"\n \n \n Game Finished");
		return;
	}
	delay(1000);
    static six_red=0;
    int diceroll_red=dice_roll();
	printf("\n CONGRATULATIONS! YOUR DICE SHOWS %d",diceroll_red);
	if(diceroll_red==6)
	{
		six_red++;
	}
      if(six_red==0)
	{
	printf("\n YOU CANNOT MOVE \n");
	  green();
	}
	if(six_red>0 )
	{
		printf("\n NOW PRESS 1 for R1 \n 2 for R2 \n 3 for r3 \n 4 for R4");
		while(1)
		{
		int entry_r;
		scanf("%d",&entry_r);
		if(entry_r==1)
		{
			printf("\n YOU CHOOSE R1\n");
			R1(diceroll_red);
			check_R(posx_r1,posy_r1);
			break;
		}
		else if(entry_r==2)
		{
			printf("\n YOU CHOOSE R2\n");
			R2(diceroll_red);
			check_R(posx_r2,posy_r2);
			break;
		}
		else if(entry_r==3)
		{
			printf("\nYOU CHOOSE R3\n");
			R3(diceroll_red);
			check_R(posx_r3,posy_r3);
			break;
		}
		else if(entry_r==4)
		{
			printf("\n YOU CHOOSE R4\n");
			R4(diceroll_red);
			check_R(posy_r4,posy_r4);
			break;
		}
		else
		{
			printf("\n READ THE INSTRUCTIONS AND TRY AGAIN");
		}
		}
		}
		green();
	}

void yellow()
	{
		setcolor(YELLOW);
	printf("\n \nIT IS NOW YOUR TURN YELLOW PLAYER \n YOUR DICE IS ROLLING");
	delay(1000);
       static six_yellow=0;
       int diceroll_yellow=dice_roll();
	printf("\n CONGRATULATIONS! YOUR DICE SHOWS %d ",diceroll_yellow);
	if(diceroll_yellow==6)
	{
		six_yellow++;
	}
	if(home_yellow==4)
	{
		printf("\n you have already finished yellow player");
	}
      if(six_yellow==0)
	{
	printf("\n YOU CANNOT MOVE");
	  blue();
	}
	if(six_yellow>0 )
	{
		printf("\n NOW PRESS 1 for Y1 \n 2 for Y2 \n 3 for Y3 \n 4 for Y4");
		while(1)
		{
		int entry_y;
		scanf("%d",&entry_y);
		if(entry_y==1)
		{
			printf("\n YOU CHOOSE Y1\n");
			Y1(diceroll_yellow);
			check_Y(posx_y1,posy_y1);
			break;
		}
		else if(entry_y==2)
		{
			printf("\n YOU CHOOSE Y2\n");
			Y2(diceroll_yellow);
			check_Y(posx_y2,posy_y2);
			break;
		}
		else if(entry_y==3)
		{
			printf("\nYOU CHOOSE Y3\n");
			Y3(diceroll_yellow);
			check_Y(posx_y3,posy_y3);
			break;
		}
		else if(entry_y==4)
		{
			printf("\n YOU CHOOSE Y4\n");
			Y4(diceroll_yellow);
			check_Y(posx_y4,posy_y4);
			break;
		}
		else
		{
			printf("\n READ THE INSTRUCTIONS AND TRY AGAIN");
		}
		}
		}
		blue();
	}
	void blue()
	{
	setcolor(BLUE);
	printf("\n \n \n IT IS NOW TURN BLUE PLAYER \n YOUR DICE IS ROLLING");
	delay(1000);
	if(home_blue==4)
	{
		printf("\n you have already finished game blue game");
	}
       static six_blue=0;
       int diceroll_blue=dice_roll();
	printf("\n CONGRATULATIONS! YOUR DICE SHOWS %d",diceroll_blue);
	if(diceroll_blue==6)
	{
		six_blue++;
	}
      if(six_blue==0)
	{
	printf("\n YOU CANNOT MOVE");
	  red();
	}
	if(six_blue>0 )
	{
		printf("\n NOW PRESS 1 for B1 \n 2 for B2 \n 3 for B3 \n 4 for B4");
		while(1)
		{
		int entry_b;
		scanf("%d",&entry_b);
		if(entry_b==1)
		{
			printf("\n YOU CHOOSE B1\n");
			B1(diceroll_blue);
			check_B(posx_b1,posy_b1);
			break;
		}
		else if(entry_b==2)
		{
			printf("\n YOU CHOOSE B2\n");
			B2(diceroll_blue);
			check_B(posx_b2,posy_b2);
			break;
		}
		else if(entry_b==3)
		{
			printf("\nYOU CHOOSE B3\n");
			B3(diceroll_blue);
			check_B(posx_b3,posy_b3);
			break;
		}
		else if(entry_b==4)
		{
			printf("\n YOU CHOOSE B4\n");
			B4(diceroll_blue);
			check_B(posx_b4,posy_b4);
			break;
		}
		else
		{
			printf("\n READ THE INSTRUCTIONS AND TRY AGAIN");
		}
		}
		}
		red();
	}
	int main()
	{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	red();
	getch();
	closegraph();
	return 0;
	}
	void R2(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_r2==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_r2=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       red();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {

			counter=diceroll+counter;
			posx_r2=45;
			posy_r2=195;
			if(counter<4)
			{
				posx_r2=posx_r2+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posx_r2=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posx_r2=posx_r2+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=195;
			posy_r2=195;
			if(counter<5)
			{
				posy_r2=posy_r2-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r2=45;
			}

		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=195;
			posy_r2=15;
			if(counter<3 && counter>0)

			{
				posx_r2=posx_r2+(30*(counter-1));
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r2=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r2=255;
			}

		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=255;
			posy_r2=15;
			if(counter<5 && counter>0)
			{
				if(posy_r2<165)
				{
				posy_r2=posy_r2+(30*counter);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r2=165;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r2=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r2=195;
			posx_r2=255;
			if(counter<5)
			{
				posx_r2=posx_r2+(counter*30);
			}
			else if(counter>5 )
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r2=posx_r2+150;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r2=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_r2=165;
			posx_r2=435;
			if(counter<3 && counter>0)
			{
				posy_r2=posy_r2+(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_r2=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r2=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r2=255;
			if(counter<5 && counter>0)
			{
			       if(posx_r2>285)
				{
				posx_r2=435;
				posx_r2=posx_r2-(counter*30);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_r2=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r2=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=255;
			posy_r2=255;
			if(counter<5 && counter>0)
			{
				posy_r2=posy_r2+(counter*30);
			}
		       else if(counter>5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r2=405;
			}
			else if(counter==5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r2=405;
			}
		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=285;
			posy_r2=435;
			if(counter<3)
			{
				posx_r2=posx_r2-(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r2=195;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r2=195;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=195;
			posy_r2=435;
			if(counter<5 && counter>0)
			{
				posy_r2=posy_r2-(30*counter);
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r2=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r2=285;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=195;
			posy_r2=255;
			if(counter<5 && counter>0)
			{
				posx_r2=posx_r2-(30*counter);
			}
			else if(counter>5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r2=45;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r2=45;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r2=15;
			posy_r2=285;
			if(counter<2 && counter>0)
			{
				posy_r2=posy_r2-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_r2=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_r2=15;
				posy_r2=225;
				posx_r2=posx_r2+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_red++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_r2=-300;

			printf("\n R2 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}

	void R1(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
			if(reset_r1==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_r1=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       red();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_r1=45;
			posy_r1=195;
			if(counter<4)
			{
				posx_r1=posx_r1+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posx_r1=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posx_r1=posx_r1+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			if(posx_r1==165 && counter>0)
			{
				posx_r1=195;
			}
			if(counter<5)
			{       posy_r1=195;
				posy_r1=posy_r1-(counter*30);
			}
			else if(counter>5)
			{
				shortt++;
				posy_r1=posy_r1-150;
				counter=counter-5;
				diceroll=0;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;

			}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=195;
			posy_r1=15;
			if(counter<3 && counter>0)

			{
				posx_r1=posx_r1+(30*(counter-1));
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r1=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r1=255;
			}

		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=255;
			posy_r1=15;
			if(counter<5 && counter>0)
			{
				if(posy_r1<165)
				{
				posy_r1=posy_r1+(30*counter);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r1=165;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r1=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r1=195;
			posx_r1=255;
			if(counter<5)
			{
				posx_r1=posx_r1+(counter*30);
			}
			else if(counter>5 )
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r1=posx_r1+150;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r1=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_r1=165;
			posx_r1=435;
			if(counter<3 && counter>0)
			{
				posy_r1=posy_r1+(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_r1=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r1=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r1=255;
			if(counter<5 && counter>0)
			{
			       if(posx_r1>285)
				{
				posx_r1=435;
				posx_r1=posx_r1-(counter*30);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_r1=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r1=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=255;
			posy_r1=255;
			if(counter<5 && counter>0)
			{
				posy_r1=posy_r1+(counter*30);
			}
		       else if(counter>5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r1=405;
			}
			else if(counter==5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r1=405;
			}
		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=285;
			posy_r1=435;
			if(counter<3)
			{
				posx_r1=posx_r1-(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r1=195;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r1=195;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=195;
			posy_r1=435;
			if(counter<5 && counter>0)
			{
				posy_r1=posy_r1-(30*counter);
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r1=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r1=285;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=195;
			posy_r1=255;
			if(counter<5 && counter>0)
			{
				posx_r1=posx_r1-(30*counter);
			}
			else if(counter>5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r1=45;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r1=45;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r1=15;
			posy_r1=285;
			if(counter<2 && counter>0)
			{
				posy_r1=posy_r1-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_r1=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_r1=15;
				posy_r1=225;
				posx_r1=posx_r1+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_red++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_r1=-300;
			printf("\n R1 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
	void R3(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_r3==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_r3=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       red();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_r3=45;
			posy_r3=195;
			if(counter<4)
			{
				posx_r3=posx_r3+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posx_r3=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posx_r3=posx_r3+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			if(posx_r3==165 && counter>0)
			{
				posx_r3=195;
			}
			if(counter<5)
			{       posy_r3=195;
				posy_r3=posy_r3-(counter*30);
			}
			else if(counter>5)
			{
				shortt++;
				posy_r3=posy_r3-150;
				counter=counter-5;
				diceroll=0;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;

			}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=195;
			posy_r3=15;
			if(counter<3 && counter>0)

			{
				posx_r3=posx_r3+(30*(counter-1));
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r3=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r3=255;
			}

		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=255;
			posy_r3=15;
			if(counter<5 && counter>0)
			{
				if(posy_r3<165)
				{
				posy_r3=posy_r3+(30*counter);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r3=165;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r3=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r3=195;
			posx_r3=255;
			if(counter<5)
			{
				posx_r3=posx_r3+(counter*30);
			}
			else if(counter>5 )
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r3=posx_r3+150;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r3=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_r3=165;
			posx_r3=435;
			if(counter<3 && counter>0)
			{
				posy_r3=posy_r3+(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_r3=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r3=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r3=255;
			if(counter<5 && counter>0)
			{
			       if(posx_r3>285)
				{
				posx_r3=435;
				posx_r3=posx_r3-(counter*30);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_r3=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r3=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=255;
			posy_r3=255;
			if(counter<5 && counter>0)
			{
				posy_r3=posy_r3+(counter*30);
			}
		       else if(counter>5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r3=405;
			}
			else if(counter==5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r3=405;
			}
		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=285;
			posy_r3=435;
			if(counter<3)
			{
				posx_r3=posx_r3-(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r3=195;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r3=195;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=195;
			posy_r3=435;
			if(counter<5 && counter>0)
			{
				posy_r3=posy_r3-(30*counter);
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r3=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r3=285;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=195;
			posy_r3=255;
			if(counter<5 && counter>0)
			{
				posx_r3=posx_r3-(30*counter);
			}
			else if(counter>5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r3=45;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r3=45;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r3=15;
			posy_r3=285;
			if(counter<2 && counter>0)
			{
				posy_r3=posy_r3-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_r3=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_r3=15;
				posy_r3=225;
				posx_r3=posx_r3+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_red++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_r3=-300;
			printf("\n R3 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
	void R4(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_r4==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_r4=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       red();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_r4=45;
			posy_r4=195;
			if(counter<4)
			{
				posx_r4=posx_r4+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posx_r4=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posx_r4=posx_r4+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			if(posx_r4==165 && counter>0)
			{
				posx_r4=195;
			}
			if(counter<5)
			{       posy_r4=195;
				posy_r4=posy_r4-(counter*30);
			}
			else if(counter>5)
			{
				shortt++;
				posy_r4=posy_r4-150;
				counter=counter-5;
				diceroll=0;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;

			}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=195;
			posy_r4=15;
			if(counter<3 && counter>0)

			{
				posx_r4=posx_r4+(30*(counter-1));
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r4=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r4=255;
			}

		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=255;
			posy_r4=15;
			if(counter<5 && counter>0)
			{
				if(posy_r4<165)
				{
				posy_r4=posy_r4+(30*counter);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r4=165;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r4=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r4=195;
			posx_r4=255;
			if(counter<5)
			{
				posx_r4=posx_r4+(counter*30);
			}
			else if(counter>5 )
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r4=posx_r4+150;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r4=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_r4=165;
			posx_r4=435;
			if(counter<3 && counter>0)
			{
				posy_r4=posy_r4+(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_r4=255;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r4=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_r4=255;
			if(counter<5 && counter>0)
			{
			       if(posx_r4>285)
				{
				posx_r4=435;
				posx_r4=posx_r4-(counter*30);
				}
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_r4=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r4=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=255;
			posy_r4=255;
			if(counter<5 && counter>0)
			{
				posy_r4=posy_r4+(counter*30);
			}
		       else if(counter>5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r4=405;
			}
			else if(counter==5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_r4=405;
			}
		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=285;
			posy_r4=435;
			if(counter<3)
			{
				posx_r4=posx_r4-(counter*30);
			}
			else if(counter>3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_r4=195;
			}
			else if(counter==3)
			{
				longg++;
				counter=0;
				diceroll=0;
				posx_r4=195;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=195;
			posy_r4=435;
			if(counter<5 && counter>0)
			{
				posy_r4=posy_r4-(30*counter);
			}
			else if(counter>5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_r4=285;
			}
			else if(counter==5)
			{
				longg++;
				counter=0;
				diceroll=0;
				posy_r4=285;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=195;
			posy_r4=255;
			if(counter<5 && counter>0)
			{
				posx_r4=posx_r4-(30*counter);
			}
			else if(counter>5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_r4=45;
			}
			else if(counter==5)
			{
				shortt++;
				counter=0;
				diceroll=0;
				posx_r4=45;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_r4=15;
			posy_r4=285;
			if(counter<2 && counter>0)
			{
				posy_r4=posy_r4-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_r4=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_r4=15;
				posy_r4=225;
				posx_r4=posx_r4+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_red++;
				printf("\n R4 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_r4=-300;
			printf("\n R4 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
	void green()
	{
	setcolor(GREEN);
	printf("\n \n \n IT IS NOW YOUR TURN GREEN PLAYER \n YOUR DICE IS ROLLING");
	delay(1000);
	if(home_green==4)
	{
		printf("\n You have already finished the game green player");
	}
       static six_green=0;
       int diceroll_green=dice_roll();
	printf("\n CONGRATULATIONS! YOUR DICE SHOWS %d",diceroll_green);
	if(diceroll_green==6)
	{
		six_green++;
	}
      if(six_green==0)
	{
	printf("\n YOU CANNOT MOVE");
	 yellow();
	}
	if(six_green>0 )
	{
		printf("\n NOW PRESS 1 for G1 \n 2 for G2 \n 3 for G3 \n 4 for G4");
		while(1)
		{
		int entry_g;
		scanf("%d",&entry_g);
		if(entry_g==1)
		{
			printf("\n YOU CHOOSE G1\n");
			G1(diceroll_green);
			check_G(posx_g1,posy_g1);
			break;
		}
		else if(entry_g==2)
		{
			printf("\n YOU CHOOSE G2\n");
			G2(diceroll_green);
			check_G(posx_g2,posy_g2);
			break;
		}
		else if(entry_g==3)
		{
			printf("\nYOU CHOOSE G3\n");
			G3(diceroll_green);
			check_G(posx_g3,posy_g3);
			break;
		}
		else if(entry_g==4)
		{
			printf("\n YOU CHOOSE G4\n");
			G4(diceroll_green);
			check_G(posx_g4,posy_g4);
			break;
		}
		else
		{
			printf("\n READ THE INSTRUCTIONS AND TRY AGAIN");
		}
		}
		}
		yellow();
	}
	void G1(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_g1==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_g1=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       green();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_g1=255;
			posy_g1=45;
			if(counter<4)
			{
				posy_g1=posy_g1+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posy_g1=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posy_g1=posy_g1+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_g1=255;
				posy_g1=195;
				if(counter<5 && counter>0)
				{
					posx_g1=posx_g1+(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_g1=405;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=435;
			posy_g1=195;
			if(counter<3 && counter>0)

			{
				posy_g1=posy_g1+(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g1=255;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=435;
			posy_g1=255;
			if(counter<5 && counter>0)
			{

				posx_g1=posx_g1-(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g1=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g1=255;
			posx_g1=255;
			if(counter<5)
			{
				posy_g1=posy_g1+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g1=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_g1=435;
			posx_g1=285;
			if(counter<3 && counter>0)
			{
				posx_g1=posx_g1-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_g1=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g1=435;
			posx_g1=195;
			if(counter<5 && counter>0)
			{
				posy_g1=posy_g1-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_g1=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=195;
			posy_g1=255;
			if(counter<5 && counter>0)
			{
				posx_g1=posx_g1-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_g1=45;
			}
		}
	

		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=15;
			posy_g1=285;
			if(counter<3)
			{
				posy_g1=posy_g1-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g1=195;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=15;
			posy_g1=195;
			if(counter<5 && counter>0)
			{
				posx_g1=posx_g1+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g1=165;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=195;
			posy_g1=195;
			if(counter<5 && counter>0)
			{
				posy_g1=posy_g1-(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g1=45;
			}
			
		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g1=165;
			posy_g1=15;
			if(counter<2 && counter>0)
			{
				posx_g1=posx_g1+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_g1=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_g1=225;
				posy_g1=15;
				posy_g1=posy_g1+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_green++;
				printf("\n G1 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_g1=-300;

			printf("\n G1 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}

void G2(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_g2==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_g2=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       green();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_g2=255;
			posy_g2=45;
			if(counter<4)
			{
				posy_g2=posy_g2+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posy_g2=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posy_g2=posy_g2+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_g2=255;
				posy_g2=195;
				if(counter<5 && counter>0)
				{
					posx_g2=posx_g2+(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_g2=405;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=435;
			posy_g2=195;
			if(counter<3 && counter>0)

			{
				posy_g2=posy_g2+(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g2=255;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=435;
			posy_g2=255;
			if(counter<5 && counter>0)
			{

				posx_g2=posx_g2-(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g2=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g2=255;
			posx_g2=255;
			if(counter<5)
			{
				posy_g2=posy_g2+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g2=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_g2=435;
			posx_g2=285;
			if(counter<3 && counter>0)
			{
				posx_g2=posx_g2-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_g2=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g2=435;
			posx_g2=195;
			if(counter<5 && counter>0)
			{
				posy_g2=posy_g2-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_g2=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=195;
			posy_g2=255;
			if(counter<5 && counter>0)
			{
				posx_g2=posx_g2-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_g2=45;
			}
		}


		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=15;
			posy_g2=285;
			if(counter<3)
			{
				posy_g2=posy_g2-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g2=195;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=15;
			posy_g2=195;
			if(counter<5 && counter>0)
			{
				posx_g2=posx_g2+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g2=165;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=195;
			posy_g2=195;
			if(counter<5 && counter>0)
			{
				posy_g2=posy_g2-(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g2=45;
			}

		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g2=165;
			posy_g2=15;
			if(counter<2 && counter>0)
			{
				posx_g2=posx_g2+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_g2=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_g2=225;
				posy_g2=15;
				posy_g2=posy_g2+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_green++;
				printf("\n G2 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_g2=-300;

			printf("\n G2 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
	void G3(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_g3==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       green();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_g3=255;
			posy_g3=45;
			if(counter<4)
			{
				posy_g3=posy_g3+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posy_g3=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posy_g3=posy_g3+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_g3=255;
				posy_g3=195;
				if(counter<5 && counter>0)
				{
					posx_g3=posx_g3+(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_g3=405;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=435;
			posy_g3=195;
			if(counter<3 && counter>0)

			{
				posy_g3=posy_g3+(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g3=255;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=435;
			posy_g3=255;
			if(counter<5 && counter>0)
			{

				posx_g3=posx_g3-(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g3=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g3=255;
			posx_g3=255;
			if(counter<5)
			{
				posy_g3=posy_g3+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g3=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_g3=435;
			posx_g3=285;
			if(counter<3 && counter>0)
			{
				posx_g3=posx_g3-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_g3=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g3=435;
			posx_g3=195;
			if(counter<5 && counter>0)
			{
				posy_g3=posy_g3-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_g3=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=195;
			posy_g3=255;
			if(counter<5 && counter>0)
			{
				posx_g3=posx_g3-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_g3=45;
			}
		}


		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=15;
			posy_g3=285;
			if(counter<3)
			{
				posy_g3=posy_g3-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g3=195;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=15;
			posy_g3=195;
			if(counter<5 && counter>0)
			{
				posx_g3=posx_g3+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g3=165;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=195;
			posy_g3=195;
			if(counter<5 && counter>0)
			{
				posy_g3=posy_g3-(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g3=45;
			}

		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g3=165;
			posy_g3=15;
			if(counter<2 && counter>0)
			{
				posx_g3=posx_g3+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_g3=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_g3=225;
				posy_g3=15;
				posy_g3=posy_g3+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_green++;
				
				printf("\n G3 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_g3=-300;

			printf("\n G3 reached home");
			return;
		    }
		     printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
		    void G4(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_g4==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_g4=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       green();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_g4=255;
			posy_g4=45;
			if(counter<4)
			{
				posy_g1=posy_g1+(counter*30);

			}
			else if(counter>4)
			{
				counter=counter-4;
				diceroll=0;
				posy_g1=165;
				longg++;
			}
			else
			{
				counter=0;
				diceroll=0;
				posy_g4=posy_g4+120;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_g4=255;
				posy_g4=195;
				if(counter<5 && counter>0)
				{
					posx_g4=posx_g4+(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_g4=405;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=435;
			posy_g4=195;
			if(counter<3 && counter>0)

			{
				posy_g4=posy_g4+(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g4=255;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=435;
			posy_g4=255;
			if(counter<5 && counter>0)
			{

				posx_g4=posx_g4-(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g4=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g4=255;
			posx_g4=255;
			if(counter<5)
			{
				posy_g4=posy_g4+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g4=405;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_g4=435;
			posx_g4=285;
			if(counter<3 && counter>0)
			{
				posx_g4=posx_g4-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_g4=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_g4=435;
			posx_g4=195;
			if(counter<5 && counter>0)
			{
				posy_g4=posy_g4-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_g4=285;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=195;
			posy_g4=255;
			if(counter<5 && counter>0)
			{
				posx_g4=posx_g4-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_g4=45;
			}
		}


		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=15;
			posy_g4=285;
			if(counter<3)
			{
				posy_g4=posy_g4-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_g4=195;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=15;
			posy_g4=195;
			if(counter<5 && counter>0)
			{
				posx_g4=posx_g4+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_g4=165;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=195;
			posy_g4=195;
			if(counter<5 && counter>0)
			{
				posy_g4=posy_g4-(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_g4=45;
			}

		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_g4=165;
			posy_g4=15;
			if(counter<2 && counter>0)
			{
				posx_g4=posx_g4+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_g4=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_g4=225;
				posy_g4=15;
				posy_g4=posy_g4+(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_green++;
				printf("\n g4 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_g4=-300;

			printf("\n G4 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
	}
}
	void Y1(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_y1==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_y1=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       yellow();
		}
		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_y1=405;
			posy_y1=255;
			if(counter<4)
			{
				posx_y1=posx_y1-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posx_y1=285;
				longg++;
			}

		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=255;
			posy_y1=255;
			if(counter<5)
			{
				posy_y1=posy_y1+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y1=405;
			}

		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=255;
			posy_y1=435;
			if(counter<3 && counter>0)

			{
				posx_y1=posx_y1-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y1=195;
			}
		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=195;
			posy_y1=435;
			if(counter<5 && counter>0)
			{
				posy_y1=posy_y1-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y1=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y1=255;
			posx_y1=195;
			if(counter<5)
			{
				posx_y1=posx_y1-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y1=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_y1=285;
			posx_y1=15;
			if(counter<3 && counter>0)
			{
				posy_y1=posy_y1-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_y1=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y1=195;
			posx_y1=15;
			if(counter<5 && counter>0)
			{
				posx_y1=posx_y1+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_y1=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=195;
			posy_y1=195;
			if(counter<5 && counter>0)
			{
				posy_y1=posy_y1-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y1=45;
				}

		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=195;
			posy_y1=15;
			if(counter<3)
			{
				posx_y1=posx_y1+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y1=255;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y1=15;
			posx_y1=255;
			if(counter<5 && counter>0)
			{
				posy_y1=posy_y1+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y1=165;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=255;
			posy_y1=195;
			if(counter<5 && counter>0)
			{
				posx_y1=posx_y1+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y1=405;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y1=435;
			posy_y1=165;
			if(counter<2 && counter>0)
			{
				posy_y1=posy_y1+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_y1=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_y1=435;
				posy_y1=225;
				posx_y1=posx_y1-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_yellow++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_y1=-300;

			printf("\n Y1 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}

	void Y2(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_y2==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_y2=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       yellow();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_y2=405;
			posy_y2=255;
			if(counter<4)
			{
				posx_y2=posx_y2-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posx_y2=285;
				longg++;
			}

		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=255;
			posy_y2=255;
			if(counter<5)
			{
				posy_y2=posy_y2+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y2=405;
			}

		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=255;
			posy_y2=435;
			if(counter<3 && counter>0)

			{
				posx_y2=posx_y2-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y2=195;
			}
		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=195;
			posy_y2=435;
			if(counter<5 && counter>0)
			{
				posy_y2=posy_y2-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y2=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y2=255;
			posx_y2=195;
			if(counter<5)
			{
				posx_y2=posx_y2-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y2=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_y2=285;
			posx_y2=15;
			if(counter<3 && counter>0)
			{
				posy_y2=posy_y2-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_y2=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y2=195;
			posx_y2=15;
			if(counter<5 && counter>0)
			{
				posx_y2=posx_y2+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_y2=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=195;
			posy_y2=195;
			if(counter<5 && counter>0)
			{
				posy_y2=posy_y2-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y2=45;
				}

		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=195;
			posy_y2=15;
			if(counter<3)
			{
				posx_y2=posx_y2+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y2=255;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y2=15;
			posx_y2=255;
			if(counter<5 && counter>0)
			{
				posy_y2=posy_y2+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y2=165;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=255;
			posy_y2=195;
			if(counter<5 && counter>0)
			{
				posx_y2=posx_y2+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y2=405;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y2=435;
			posy_y2=165;
			if(counter<2 && counter>0)
			{
				posy_y2=posy_y2+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll=0;
				posy_y2=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_y2=435;
				posy_y2=225;
				posx_y2=posx_y2-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_yellow++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_y2=-300;

			printf("\n Y2 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
void Y3(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_y3==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_y3=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       yellow();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_y3=405;
			posy_y3=255;
			if(counter<4)
			{
				posx_y3=posx_y3-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posx_y3=285;
				longg++;
			}

		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=255;
			posy_y3=255;
			if(counter<5)
			{
				posy_y3=posy_y3+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y3=405;
			}

		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=255;
			posy_y3=435;
			if(counter<3 && counter>0)

			{
				posx_y3=posx_y3-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y3=195;
			}
		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=195;
			posy_y3=435;
			if(counter<5 && counter>0)
			{
				posy_y3=posy_y3-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y3=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y3=255;
			posx_y3=195;
			if(counter<5)
			{
				posx_y3=posx_y3-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y3=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_y3=285;
			posx_y3=15;
			if(counter<3 && counter>0)
			{
				posy_y3=posy_y3-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_y3=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y3=195;
			posx_y3=15;
			if(counter<5 && counter>0)
			{
				posx_y3=posx_y3+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_y3=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=195;
			posy_y3=195;
			if(counter<5 && counter>0)
			{
				posy_y3=posy_y3-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y3=45;
				}

		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=195;
			posy_y3=15;
			if(counter<3)
			{
				posx_y3=posx_y3+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y3=255;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y3=15;
			posx_y3=255;
			if(counter<5 && counter>0)
			{
				posy_y3=posy_y3+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y3=165;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=255;
			posy_y3=195;
			if(counter<5 && counter>0)
			{
				posx_y3=posx_y3+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y3=405;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y3=435;
			posy_y3=165;
			if(counter<2 && counter>0)
			{
				posy_y3=posy_y3+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_y3=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_y3=435;
				posy_y3=225;
				posx_y3=posx_y3-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_yellow++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_y3=-300;

			printf("\n Y3 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
void Y4(int diceroll)
	{
		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_y4==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_y4=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       yellow();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_y4=405;
			posy_y4=255;
			if(counter<4)
			{
				posx_y4=posx_y4-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posx_y4=285;
				longg++;
			}

		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=255;
			posy_y4=255;
			if(counter<5)
			{
				posy_y4=posy_y4+(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y4=405;
			}

		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=255;
			posy_y4=435;
			if(counter<3 && counter>0)

			{
				posx_y4=posx_y4-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y4=195;
			}
		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=195;
			posy_y4=435;
			if(counter<5 && counter>0)
			{
				posy_y4=posy_y4-(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y4=285;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y4=255;
			posx_y4=195;
			if(counter<5)
			{
				posx_y4=posx_y4-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y4=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_y4=285;
			posx_y4=15;
			if(counter<3 && counter>0)
			{
				posy_y4=posy_y4-(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_y4=195;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y4=195;
			posx_y4=15;
			if(counter<5 && counter>0)
			{
				posx_y4=posx_y4+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_y4=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=195;
			posy_y4=195;
			if(counter<5 && counter>0)
			{
				posy_y4=posy_y4-(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_y4=45;
				}
			
		    }
		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=195;
			posy_y4=15;
			if(counter<3)
			{
				posx_y4=posx_y4+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_y4=255;
			}
		    }
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_y4=15;
			posx_y4=255;
			if(counter<5 && counter>0)
			{
				posy_y4=posy_y4+(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_y4=165;
			}
		    }
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=255;
			posy_y4=195;
			if(counter<5 && counter>0)
			{
				posx_y4=posx_y4+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_y4=405;
			}
		    }
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_y4=435;
			posy_y4=165;
			if(counter<2 && counter>0)
			{
				posy_y4=posy_y4+(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posy_y4=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_y4=435;
				posy_y4=225;
				posx_y4=posx_y4-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_yellow++;
				printf("\n ONE OF YOUR PIECES REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				//posx_y4=posx_y4
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_y4=-300;

			printf("\n Y4 reached home");
			return;
		    }
		   printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
	void B1(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_b1==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_b1=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       blue();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_b1=195;
			posy_b1=405;
			if(counter<4)
			{
				posy_b1=posy_b1-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posy_b1=285;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_b1=195;
				posy_b1=255;
				if(counter<5 && counter>0)
				{
					posx_b1=posx_b1-(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_b1=45;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=15;
			posy_b1=255;
			if(counter<3 && counter>0)

			{
				posy_b1=posy_b1-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b1=195;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=15;
			posy_b1=195;
			if(counter<5 && counter>0)
			{

				posx_b1=posx_b1+(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b1=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_b1=195;
			posx_b1=195;
			if(counter<5)
			{
				posy_b1=posy_b1-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b1=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_b1=15;
			posx_b1=195;
			if(counter<3 && counter>0)
			{
				posx_b1=posx_b1+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_b1=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=255;
			posy_b1=15;
			if(counter<5 && counter>0)
			{
				posy_b1=posy_b1+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_b1=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=255;
			posy_b1=195;
			if(counter<5 && counter>0)
			{
				posx_b1=posx_b1+(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_b1=405;
			}
		}
	

		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=435;
			posy_b1=165;
			if(counter<3)
			{
				posy_b1=posy_b1+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b1=255;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=435;
			posy_b1=255;
			if(counter<5 && counter>0)
			{
				posx_b1=posx_b1-(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b1=285;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=255;
			posy_b1=255;
			if(counter<5 && counter>0)
			{
				posy_b1=posy_b1+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b1=405;
			}
			
		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b1=255;
			posy_b1=435;
			if(counter<2 && counter>0)
			{
				posx_b1=posx_b1-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_b1=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_b1=225;
				posy_b1=435;
				posy_b1=posy_b1-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_blue++;
				printf("\n B1 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_b1=-300;

			printf("\n B1 reached home");
			return;
		    }
			printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,
			posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,
			posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,
			posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
		void B2(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_b2==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_b2=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       blue();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_b2=195;
			posy_b2=405;
			if(counter<4)
			{
				posy_b2=posy_b2-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posy_b2=285;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_b2=195;
				posy_b2=255;
				if(counter<5 && counter>0)
				{
					posx_b2=posx_b2-(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_b2=45;
				}
		   }	
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=15;
			posy_b2=255;
			if(counter<3 && counter>0)

			{
				posy_b2=posy_b2-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b2=195;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=15;
			posy_b2=195;
			if(counter<5 && counter>0)
			{

				posx_b2=posx_b2+(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b2=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_b2=195;
			posx_b2=195;
			if(counter<5)
			{
				posy_b2=posy_b2-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b2=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_b2=15;
			posx_b2=195;
			if(counter<3 && counter>0)
			{
				posx_b2=posx_b2+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_b2=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=255;
			posy_b2=15;
			if(counter<5 && counter>0)
			{
				posy_b2=posy_b2+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_b2=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=255;
			posy_b2=195;
			if(counter<5 && counter>0)
			{
				posx_b2=posx_b2+(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_b2=405;
			}
		}
	

		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=435;
			posy_b2=165;
			if(counter<3)
			{
				posy_b2=posy_b2+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b2=255;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=435;
			posy_b2=255;
			if(counter<5 && counter>0)
			{
				posx_b2=posx_b2-(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b2=285;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=255;
			posy_b2=255;
			if(counter<5 && counter>0)
			{
				posy_b2=posy_b2+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b2=405;
			}
			
		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b2=255;
			posy_b2=435;
			if(counter<2 && counter>0)
			{
				posx_b2=posx_b2-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_b2=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_b2=225;
				posy_b2=435;
				posy_b2=posy_b2-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_blue++;
				printf("\n B2 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_b2=-300;

			printf("\n B2 has already reached home");
			return;
		    }
			printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,
			posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,
			posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,
			posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
		void B3(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_b3==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_b3=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       green();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_b3=195;
			posy_b3=405;
			if(counter<4)
			{
				posy_b3=posy_b3-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posy_b3=285;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_b3=195;
				posy_b3=255;
				if(counter<5 && counter>0)
				{
					posx_b3=posx_b3-(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_b3=45;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=15;
			posy_b3=255;
			if(counter<3 && counter>0)

			{
				posy_b3=posy_b3-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b3=195;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=15;
			posy_b3=195;
			if(counter<5 && counter>0)
			{

				posx_b3=posx_b3+(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b3=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_b3=195;
			posx_b3=195;
			if(counter<5)
			{
				posy_b3=posy_b3-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b3=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_b3=15;
			posx_b3=195;
			if(counter<3 && counter>0)
			{
				posx_b3=posx_b3+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_b3=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=255;
			posy_b3=15;
			if(counter<5 && counter>0)
			{
				posy_b3=posy_b3+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_b3=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=255;
			posy_b3=195;
			if(counter<5 && counter>0)
			{
				posx_b3=posx_b3+(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_b3=405;
			}
		}


		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=435;
			posy_b3=165;
			if(counter<3)
			{
				posy_b3=posy_b3+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b3=255;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=435;
			posy_b3=255;
			if(counter<5 && counter>0)
			{
				posx_b3=posx_b3-(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b3=285;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=255;
			posy_b3=255;
			if(counter<5 && counter>0)
			{
				posy_b3=posy_b3+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b3=405;
			}
			
		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b3=255;
			posy_b3=435;
			if(counter<2 && counter>0)
			{
				posx_b3=posx_b3-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_b3=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_b3=225;
				posy_b3=435;
				posy_b3=posy_b3-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_blue++;
				printf("\n B3 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_b3=-300;

			printf("\n B3 has already reached home");
			return;
		    }
			printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,
			posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,
			posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,
			posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}
		void B4(int diceroll)
	{

		static start=0;
		static int ini=1;
		static int longg=0;
		static int shortt=0;
		static int counter=0;
		if(reset_b4==1)
		{
			longg=0;
			shortt=0;
			start=0;
			counter=0;
		}
		if(diceroll==6)
		{
			start=1;
			reset_b4=0;
		}
		if(start==0)
		{
			printf("\n YOU CANNOT MOVE THIS PIECE UNTILL YOUR DICE SHOWS 6\n");
		       blue();
		}

		if(start>0)
		{
		   if(ini==1 && longg==0 && shortt==0)
		   {
			counter=diceroll+counter;
			posx_b4=195;
			posy_b4=405;
			if(counter<4)
			{
				posy_b4=posy_b4-(counter*30);

			}
			else if(counter>=4)
			{
				counter=counter-4;
				diceroll=0;
				posy_b4=285;
				longg++;
			}
		   }
		   if(ini==1 && longg==1 && shortt==0)
		   {
				counter=counter+diceroll;
				if(counter==0)
				{
					printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
					return;
				}
				posx_b4=195;
				posy_b4=255;
				if(counter<5 && counter>0)
				{
					posx_b4=posx_b4-(counter*30);
				}
				else if(counter>=5)
				{
					shortt++;
					counter=counter-5;
					diceroll=0;
					posx_b4=45;
				}
		   }
		   if(ini==1 && longg==1 && shortt==1)
		   {
			counter=diceroll+counter;

			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=15;
			posy_b4=255;
			if(counter<3 && counter>0)

			{
				posy_b4=posy_b4-(30*(counter-1));
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b4=195;
			}


		   }
		   if(ini==1 && longg==2 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=15;
			posy_b4=195;
			if(counter<5 && counter>0)
			{

				posx_b4=posx_b4+(30*counter);

			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b4=165;
			}
		   }
		   if(ini==1 && longg==3 && shortt==1)
		   {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posy_b4=195;
			posx_b4=195;
			if(counter<5)
			{
				posy_b4=posy_b4-(counter*30);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b4=45;
			}
		}
		if(ini==1 && longg==3 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
			  printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
			  return;
			}
			posy_b4=15;
			posx_b4=195;
			if(counter<3 && counter>0)
			{
				posx_b4=posx_b4+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posx_b4=255;
			}
		}
		if(ini==1 && longg==4 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=255;
			posy_b4=15;
			if(counter<5 && counter>0)
			{
				posy_b4=posy_b4+(counter*30);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posy_b4=165;
			}
		}
		if(ini==1 && longg==5 && shortt==2)
		{
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=255;
			posy_b4=195;
			if(counter<5 && counter>0)
			{
				posx_b4=posx_b4+(counter*30);
			}
		       else if(counter>=5)
		       {
				shortt++;
				counter=counter-5;
				diceroll=0;
				posx_b4=405;
			}
		}
	

		    if(ini==1 && longg==5 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=435;
			posy_b4=165;
			if(counter<3)
			{
				posy_b4=posy_b4+(counter*30);
			}
			else if(counter>=3)
			{
				longg++;
				counter=counter-3;
				diceroll=0;
				posy_b4=255;
			}

		}
		    if(ini==1 && longg==6 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=435;
			posy_b4=255;
			if(counter<5 && counter>0)
			{
				posx_b4=posx_b4-(30*counter);
			}
			else if(counter>=5)
			{
				longg++;
				counter=counter-5;
				diceroll=0;
				posx_b4=285;
			}
		}
		    if(ini==1 && longg==7 && shortt==3)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=255;
			posy_b4=255;
			if(counter<5 && counter>0)
			{
				posy_b4=posy_b4+(30*counter);
			}
			else if(counter>=5)
			{
				shortt++;
				counter=counter-5;
				diceroll=0;
				posy_b4=405;
			}

		}
		    if(ini==1 && longg==7 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{
				printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}
			posx_b4=255;
			posy_b4=435;
			if(counter<2 && counter>0)
			{
				posx_b4=posx_b4-(counter*30);
			}
			else if(counter>=2)
			{
				longg++;
				counter=counter-2;
				diceroll;
				posx_b4=225;
			}

		    }
		    if(ini==1 && longg==8 && shortt==4)
		    {
			counter=counter+diceroll;
			if(counter==0)
			{       printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
				return;
			}

			if(counter<6)
			{
				posx_b4=225;
				posy_b4=435;
				posy_b4=posy_b4-(30*counter);
			}
			else if(counter==6)
			{
				ini++;
				home_blue++;
				printf("\n B4 REACHED HOME!!!!!");
			}
			else if(counter>6)
			{
				counter=counter-diceroll;
				printf("\n YOU CANNOT REACH HOME UNTILL YOU SCORE %d",(6-counter));
			}
		    }
		    if(ini==2)
		    {
			posx_b4=-300;

			printf("\n B4 reached home");
			return;
		    }
			printpiece(posx_r1,posy_r1,posx_r2,posy_r2,posx_r3,posy_r3,posx_r4,posy_r4,
			posx_g1,posy_g1,posx_g2,posy_g2,posx_g3,posy_g3,posx_g4,posy_g4,
			posx_y1,posy_y1,posx_y2,posy_y2,posx_y3,posy_y3,posx_y4,posy_y4,
			posx_b1,posy_b1,posx_b2,posy_b2,posx_b3,posy_b3,posx_b4,posy_b4);
		}
	}