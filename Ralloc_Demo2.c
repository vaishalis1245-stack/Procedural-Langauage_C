#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  
  int *Arr=NULL;
  
  
  Arr=(int *)malloc(5 * sizeof(int));  //20

 //step 1 :alloacte the memory
  

 //step2:Use the Memory 
 Arr = (int *)realloc(Arr,3*sizeof(int));  //12

 //step3:Free the memory
 free(Arr);

    return 0;
}