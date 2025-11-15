#include<stdio.h>

int Addition(int ino1,int ino2)
{
    int isum=0;
    isum=ino1+ino2;
    return isum;

}

int main()
{
    int ivalue1=0,ivalue2=0,ians=0;
    printf("enter first no \n");
    scanf("%d",&ivalue1);

    printf("enter seconf no \n");
    scanf("%d",&ivalue2);

    ians=Addition(ivalue1,ivalue2);
    printf("addition is:%d\n",ians);

    return 0;
}