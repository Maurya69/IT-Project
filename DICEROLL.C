#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int dice_roll()
	{
		 srand(time(NULL));
	int diceroll=rand()%6;
	if(diceroll==0)
	{
		diceroll=6;
	}
	return diceroll;
	}