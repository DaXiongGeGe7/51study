#include <REGX52.H>

void Delay(xms)		//@12.000MHz
{
	while(xms)
	{
				unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}

}

void main()
{
	if(P3_1==0)
	{
		Delay(20);
		while(P3_1==0);
		P2_0=~P2_0;
	}
}