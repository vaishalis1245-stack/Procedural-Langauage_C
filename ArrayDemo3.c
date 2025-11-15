#include<stdio.h>
int main()
{
   int arr[4]={10,20,30,40};

   printf("arr : %ul\n",arr); 
   printf("&arr : %ul\n",&arr);
   printf("&arr[0] : %ul\n",(&arr[0]));


    return 0;
}