#include <stdio.h>
#define PI 3.14159
#include <math.h> //needed to use Sin function

int main()
{
double value; //make value a double
double input; //takes input between (0,1)
printf("put your input here\n");
scanf("%lf",&input); //takes input and stores it in address input
value = sin(input);
printf("The sin value is %lf\n",value);
return 0;
}

