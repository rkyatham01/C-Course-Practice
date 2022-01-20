#include <stdio.h>

#include <math.h> //used for Trig Functions
//abs works for ints
//fabs works for doubles

int main(void)
{ 
   int i;
   double interval;

   for(i = 0; i <30; i++)
   {
     interval = i/10.0;
     printf("sin(%lf) = %lf \t", interval, fabs(sin(interval)));
   }

printf("\n+++++++\n");
   
return 0;
}
