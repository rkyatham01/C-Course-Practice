#include <stdio.h>

#include <math.h>

int main(void){
   double interval;
   int i;
   double resultofsin;
   printf("Sin table:\n");

   //for Sin Function Table
   for (i=0; i < 11; i++)
   {
      interval = i / 10.0;
      resultofsin = sin(interval);
      printf("The sin(%lf) = %lf \n", interval, resultofsin);

   }
   printf("Cos table:\n");
   i = 0; //sets i back
   double resultofcos;
   interval = 0; //sets interval back
   //For Cos Function table
   for (i=0; i < 11; i++)
   {
      interval = i / 10.0;
      resultofcos = cos(interval);
      printf("The cos(%lf) = %lf \n", interval, resultofcos);
   }

}
