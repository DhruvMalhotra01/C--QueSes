#include<iostream>
using namespace std;
class Base1{
    public:
    int x;void greet(){
        cout<<"How are you??"<<endl;
    }
};

class Base2{
    public:
    void greet()
    {
        cout<<"kase ho ji ?"<<endl;
    }
};

class Derived : public Base1, public Base2{

    int a;

    public:
        void greet(){
            Base2::greet();
        }
};

class B{
    public:
        void say(){

            cout<<"Hello World!"<<endl;
        }
};

class D : public B{
    int a;
    public:
    void say(){
        cout<<"Hello my beautiful people"<<endl;
}
};
int main(){
    Base1 b1obj;
    Base2 b2obj;
    b1obj.greet();
    b2obj.greet();
    Derived d;
    d.greet();



    B b;
    b.say();
    
    d.say();
    return 0;
}