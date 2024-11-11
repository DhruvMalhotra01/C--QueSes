#include<iostream>
using namespace std;

class BankDeposite{
    int principal;
    int years;
    int interestRate;
    int returnValue;

    public:
        BankDeposit(int p, int y , float r);
        BankDeposit(int p, int y , int r);
        void show();


};

BankDeposite :: BankDeposit(int p , int y ,float r)
{
    principal = p;
    years= y;
    interestRate = r;
    returnValue = principal;

    for(int i  = 0;i< y;i++)
    {



        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposite :: BankDeposit(int p , int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for(int  i = 0; i < y ; i++)
    {
        returnValue  = returnValue * (1+interestRate);
    }
}

void BankDeposite :: show(){
    cout<<endl<<"Principal amount was"<<principal
            <<". Return value after"<<years
            <<"years is"<<returnValue<<endl;
}

int main(){
    int p , y ;
    float r;
    int R;

     cout<<"Enter the value of p y and r"<<endl;
     cin>>p>>y>>r;
     bd1 = BankDeposite(p , y, r);
     bd1.show();

     cout<<"Enter the value of p y r"<<endl;
     cin>>p>>y>>R;
     bd2 = BankDeposite(p , y , R);
     bd2.show();
     return 0;
}