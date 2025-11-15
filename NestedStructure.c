#include<stdio.h>

struct demo
{
    int i;
    float f;
};
struct Hello
{
    int no;
    float marks;
    struct demo dobj; //Nested
};
int main()
{
     printf("size of hello structure is : %lu\n",sizeof(struct Hello)); //16   
    return 0;

}


