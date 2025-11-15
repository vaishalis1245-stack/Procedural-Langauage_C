#include<stdio.h>
int main()
{
   int i=10;
   int j=10;

   int ians=0, jans=0;
   ians=i++;
   jans=++j;

   printf("value of i: %d\n",i); //11
   printf("value of j: %d\n",ians); //10

   printf("value of j: %d\n",j); //11
   printf("value of j: %d\n",jans); //11



    return 0;
}