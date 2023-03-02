#include <REGX52.H>
void main()
{
	while(1)
	{
		if(P3_0==0)
		{
			P2=0xFE;
		}
		else
		{
			P2=0xFF;
		}
	}
}