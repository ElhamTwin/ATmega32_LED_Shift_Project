#include <mega32.h>
#include <delay.h>


unsigned char x=1;
void main(void)
{
DDRB=0XFF;


while (1)
      {
       PORTB=x;
       delay_ms(100);
       x<<=1;
       if (x==0)
        x=1;
      }
}
