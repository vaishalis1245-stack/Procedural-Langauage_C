#include<stdio.h>
int main()
{

   char cvalue='V';
   int ivalue=11;
   float fvalue=90.56f;
   double dvalue=98.3456;


   printf("size of character is : %lu\n",sizeof(cvalue));
   printf("size of integer is : %lu\n",sizeof(ivalue));
   printf("size of float is : %lu\n",sizeof(fvalue));
   printf("size of double is : %lu\n",sizeof(dvalue));


    return 0;
}
