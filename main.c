#include<reg51.h>

void main(void)
{

    unsigned int i;
    P2 = 0x3f;
    for(i=0;i<65000;i++)

     P2 = 0x06;
    for(i=0;i<65000;i++)

     P2 = 0x5b;
    for(i=0;i<65000;i++)


     P2 = 0x4f;
    for(i=0;i<65000;i++)

     P2 = 0x66;
    for(i=0;i<65000;i++)

     P2 = 0x6d;
    for(i=0;i<65000;i++)


     P2 = 0x7d;
    for(i=0;i<65000;i++)


     P2 = 0x07;
    for(i=0;i<65000;i++)

     P2 = 0x7f;
    for(i=0;i<65000;i++)

     P2 = 0x67;
    for(i=0;i<65000;i++)
    while(1)
    {

    }

}


