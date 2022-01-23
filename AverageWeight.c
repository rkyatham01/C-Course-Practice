#include <stdio.h>
#include <stdlib.h> //helps with reading, writing, and other stuff to a file

int main(void)
{
   FILE *fileptr; //file pointer (receives address of the File)

   if ((fileptr = fopen("sampletestfile1.txt","r")) == NULL){ //opens file here
      printf("Error!"); //If there was a error reading the file
      exit(1); //exits the file if there was an error
   }
   
   int arrayofnumbers[1000]; //where you are going to store everything
   int index = 0;
   int output=0;
   int count = 0; //keeps a count on the # of numbers in the array
   while(!feof(fileptr))  //scans inside file and goes till the End of File
   //feof is a function that will stop the file at the EOF
   {
       fscanf(fileptr, "%d", &output); //reads the value from file
       arrayofnumbers[index] = output;
       index++;
       count++;

   }
   int sum = 0;
   count--; 
   index = 0;
   //prints whats within the array
   //Finding the average weight now :
   for(int i=0; i<count; i++)
   {
     sum += arrayofnumbers[index];
     index++;
   }

   printf("%d\n",sum/count); 

   fclose(fileptr); //closes the file

   return 0;

}
