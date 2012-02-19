#include<msp430.h>

void delay()
{
unsigned int i=0;
while(++i<50000);
}

main()
  {
   P1DIR=0x0f;
   while(1)
    {
        P1OUT=0X01;
        delay();

        P1OUT=0X02;
        delay();

        P1OUT=0X04;
        delay();

        P1OUT=0X08;
        delay();


    }
  }

