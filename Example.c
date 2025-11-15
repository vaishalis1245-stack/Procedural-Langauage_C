#include<stdio.h>
#include<stdlib.h>
int main()
{
   int size = 0;
   int *p = NULL;
   int icnt = 0; //loop counter

   printf("Enter no of elements\n");
   scanf("%d",&size);

   p=(int *)malloc(size * sizeof(int));
   printf("Please enter elements\n");

   for(icnt =0;icnt<size;icnt++)
   {
    scanf("%d",&p[icnt]);
   }

   printf("entered elements are\n");

   for(icnt =0; icnt<size; icnt++)
   {
    scanf("%d",p[icnt]);
   }
   free(p);
   return 0;
}