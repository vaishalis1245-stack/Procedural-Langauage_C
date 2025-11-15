#include<iostream>
using namespace std;

class arithmatic 
{
    public:
     int ino1;
      int ino2;

    arithmatic() //constructor //behaviour
    {
       ino1=0;
       ino2=0;

    }

    arithmatic(int a, int b) //constructor//behaviour
    {
        ino1= a;
        ino2= b;

    }

    int addition() //behaviour
    {
        int ians=0;
        ians=ino1+ino2;
        return ians;
    }

    int substraction() //behaviour
    {
        int ians=0;
        ians=ino1-ino2;
        return ians;
    }
};
    int main()
    {
        arithmatic aobj1(11,10);

        int iret= 0;
        iret = aobj1.addition();
        cout<<"addition is:"<<iret<<"\n";

        iret = aobj1.substraction();
        cout<<"substraction is:"<<iret<<"\n";
        
        return 0;

    }


