#include "Delay.h"
#include <REGX52.H>
unsigned char MatrixKeyNum=0;
unsigned char MatrixKey()
{
	P1=0xFF;
	P1_3=0;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatrixKeyNum=1;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatrixKeyNum=5;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatrixKeyNum=9;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatrixKeyNum=13;}
	
	P1=0xFF;
	P1_2=0;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatrixKeyNum=2;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatrixKeyNum=6;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatrixKeyNum=10;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatrixKeyNum=14;}
	
	P1=0xFF;
	P1_1=0;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatrixKeyNum=3;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatrixKeyNum=7;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatrixKeyNum=11;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatrixKeyNum=15;}
	
	P1=0xFF;
	P1_0=0;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatrixKeyNum=4;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatrixKeyNum=8;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatrixKeyNum=12;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatrixKeyNum=16;}
	
	return MatrixKeyNum;
}