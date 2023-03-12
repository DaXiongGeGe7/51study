#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"
#include <REGX52.H>

void main()
{

		LCD_Init();
		LCD_ShowString(1,1,"Hello World");
	while(1)	
		{
		unsigned int Num=MatrixKey();
		Delay(20);
		LCD_ShowNum(2,1,Num,2);
		Delay(20);
	}
}