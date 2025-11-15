#include<stdio.h>
struct demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct demo obj;
  obj.i=1;
  obj.f=90.4f;
  obj.j=21;
   
  printf("%d\n",obj.i); //11
  printf("%f\n",obj.f); //90.4
  printf("%d\n",obj.j); //21

    return 0;

}