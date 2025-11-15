#include<stdio.h>
int main()
{

   char cvalue='V';
   int ivalue=11;
   float fvalue=90.56f;
   double dvalue=98.3456;


   printf("size of character is : %d\n",sizeof(cvalue));
   printf("size of integer is : %d\n",sizeof(ivalue));
   printf("size of float is : %d\n",sizeof(fvalue));
   printf("size of double is : %d\n",sizeof(dvalue));

   printf("Address of cvalue is: %lu\n",&cvalue);
   printf("Address of ivalue is: %lu\n",&ivalue);
   printf("Address of fvalue is: %lu\n",&fvalue);
   printf("Address of value is: %lu\n",&dvalue);


    return 0;
}
