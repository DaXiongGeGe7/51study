#include <REGX52.H>
void Delay(unsigned int xms)		//@12.000MHz
{
	while(xms--)
	{
				unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}

}

void main()
{
	unsigned char LEDNum=0;
	P2=~0x01;
	while(1)
	{
		
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			LEDNum++;
			P2=~(0x01<<LEDNum);
			if(LEDNum>=8)
			{
				LEDNum=0;
				P2=~0x01;
			}
		}
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
	
			if(LEDNum<=0)
				LEDNum=8;
			LEDNum--;
			P2=~(0x01<<LEDNum);		
		}
	}
}