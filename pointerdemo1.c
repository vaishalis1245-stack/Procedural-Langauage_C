#include<stdio.h>

int main()
{
   int ivalue=11;
   char cvalue='m';

   int *iPtr=&ivalue;
   char *cPtr=&cvalue;

   printf("size of iPtr: %lu\n",sizeof(iPtr)); 
   printf("size of cPtr: %lu\n",sizeof(cPtr));

    return 0;
}