#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int isum = 0;   
    isum = iNo1 + iNo2;
    return isum;

}

int main()
{
  
    int Value1 = 0,  Value2 = 0,  Ans = 0;

    printf("enter first number: \n");
    scanf("%d",&Value1);
    
    printf("enter second number: \n");
    scanf("%d",&Value2);

    Ans = Addition(Value1, Value2);
    printf("Addition is: %d\n",Ans);

    return 0;
}