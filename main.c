#include <REGX51.H>

void delay_ms(int i)
{
	
	
}


void main()
{
	int key_dat;	
  while(1)
  {
		if(P1!=0xff)
		{
			delay_ms(100);
			if(P1!=0xff)
			{
				if(P1==0xfe)key_dat=0;
				else if(P1==0xfd)key_dat=1;
				else if(P1==0xfb)key_dat=2;
				....				
			}		
		}
		
//		dis_play(key_dat);

		
	}	
}
