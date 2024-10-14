#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count;  // it help the function to get the next value  not the initial value
    //static varible

    public:
        void setdata(void){
            cout<<"enter id "<<endl;
            cin>>id;
            count++;

        }
        void getdata(void){
            cout<<"employee id is"<<id<<"and employee count is"<<count<<endl;
        }

        static void getcount(void){
            cout<<"count is "<<count<<endl;//static function
        }
};

int Employee :: count;  //define value zero 
// this line is equal to int Employee  :: count = 0 ;

int main(){
    Employee harry,rohan,lovish;
    harry.setdata();
    harry.getdata();

    rohan.setdata();
    rohan.getdata();

    lovish.setdata();
    lovish.getdata();
    return 0;
}