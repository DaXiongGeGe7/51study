#include <REGX52.H>
unsigned char NixieTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
unsigned int Location,Num;
void Delay(unsigned int xms)
{
	unsigned char i, j;

	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void Nixie(Location,Num)
{
	switch(Location)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=NixieTable[Num];
}
void main()
{
	Nixie(4,2);
	while(1)
	{
		Nixie(Location,Num);
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			Location++;
			if(Location>8)
				Location=0;
		}
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
			Location--;
			if(Location<=0)
				Location=8;
		}
		if(P3_2==0)
		{
			Delay(20);
			while(P3_2==0);
			Delay(20);
			
			Num++;
			if(Num>9)
				Num=0;
		}
		if(P3_3==0)
		{
			Delay(20);
			while(P3_3==0);
			Delay(20);
			
			Num--;
			if(Num<=0)
				Num=9;
		}
	}
}