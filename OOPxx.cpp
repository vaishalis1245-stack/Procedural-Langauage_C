#include<iostream>
using namespace std;

class arithmatic 
{
    public:
     this->int ino1;
      this->int ino2;

    arithmatic() //constructor //behaviour
    {
       
        this->ino1=0;
       this->ino2=0;

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
        arithmatic aobj2(21,20);

        int iret= 0;
        iret = aobj1.addition();
        cout<<"addition is:"<<iret<<"\n";

        iret = aobj1.substraction();
        cout<<"substraction is:"<<iret<<"\n";

        
        iret = aobj2.addition();
        cout<<"addition is:"<<iret<<"\n";

        iret = aobj2.substraction();
        cout<<"substraction is:"<<iret<<"\n";
        
        
        return 0;

    }


