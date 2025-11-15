#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  
  int *Arr=NULL;
  
  
  Arr=(int *)malloc(5 * sizeof(int));

 //step 1 :alloacte the memory
  

 //step2:Use the Memory 
 Arr = (int *)realloc(Arr,10*sizeof(int));

 //step3:Free the memory
 free(Arr);

    return 0;
}