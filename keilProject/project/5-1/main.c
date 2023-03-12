#include "Delay.h"
#include <REGX52.H>
#include "LCD1602.h"
int a=1,b=1;
void main()
{
	LCD_Init();
	while(1)
	{
		LCD_ShowChar(1,1,'A');
		LCD_ShowNum(1,3,a+b,2);
	}
}