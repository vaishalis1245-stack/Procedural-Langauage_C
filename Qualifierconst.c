#include<stdio.h>
int main()
{
  int No1=10;
  const int iNo2=20;
//be;ow lines genarate error
  iNo++; //ino1=ino1+1;
  iNo2++; //ino2=ino2+1;  //error
  iNo2=30;  //error

    return 0;
}