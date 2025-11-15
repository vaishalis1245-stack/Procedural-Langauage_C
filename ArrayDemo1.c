#include<stdio.h>
int main()
{
   int arr[4]={10,20,30,40};

   int brr[]={10,20,30,40,50};

   int crr[6]={10,20,30};

   printf("size of arr is:%lu",sizeof(arr)); //16 bytes
   printf("size of brr is:%lu",sizeof(brr)); //20 bytes
   printf("size of crr is:%lu",sizeof(crr)); //24 bytes

    return 0;
}