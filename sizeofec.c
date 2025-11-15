#include<stdio.h>
int main()
{
    int no=21;
    int *p=&no;
    int **q=&p;
    int ***a=&q;

    printf("%d",no);
    printf("%d",&no);
    printf("%d",*p);
    printf("%d",*q);
    printf("%d",&a);
}