#include "msp.h"
int main()
{
    WDT_A->CTL=WDT_A_CTL_PW|WDT_A_CTL_HOLD;
    
    P2->DIR|=BIT4;
    P2->OUT&=~BIT4;
    
    P1->DIR=BIT0;
    P1->DIR&=~(BIT1 | BIT4);
    P1->REN|=BIT1 | BIT4;
    P1->OUT|=BIT1 | BIT4;
    P1->OUT&=~BIT0;
    
    P1->IE=BIT1 | BIT4;
    P1->IES=BIT1 | BIT4;
    P1->IFG&=0x00;
    
    NVIC->ISER[1]= 0x0000008;
    
    __enable_irq();
    while(1);
}

void PORT1_IRQHandler(void)
{
    if(P1->IFG&BIT4)
    {
        P1->OUT&=~BIT0;
        P2->OUT&=~BIT4;
    }
    else if(P1->IFG&BIT1)
    {
        P1->OUT|=BIT0;
        P2->OUT|=BIT4;
    }
		

    else if((P1->IFG&BIT1)&&(P1->IFG&BIT4))
    {
        P1->OUT&=~BIT0;
        P2->OUT&=~BIT4;
    }
    P1->IFG=0x00;

    
}
