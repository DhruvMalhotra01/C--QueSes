#include<iostream>
using namespace std;

int count  = 0;

class num{
    public:
     num(){
        cout++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
     }
     ~num(){
        cout<<"This is the time when distructor is called for object number"<<count<<endl;
                cout--;

     }

}






int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Create first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,  n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}