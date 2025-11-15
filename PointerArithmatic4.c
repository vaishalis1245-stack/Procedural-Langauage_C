#include<stdio.h>
int main()
{
  int arr[]={11,21,51,101,111};

  int *p=NULL;
  int *q=NULL;

  p=&(arr[1]);
  q=&(arr[4]);

 printf("result of substraction is %d\n",q-p); //Allowed

 q=q-2;   //Allowed 
 printf("data pointed by Q is: %d\n",*q);

 return 0;


}