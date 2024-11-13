#include<iostream>
using namespace std;

class student{
    protected:
    int rollno;
    public:
    void set_number(int a){
        rollno = a;
    }
    void print_number(void){
        cout<<"Your roll no is "<<rollno<<endl;
    }
};

class Test : virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"You result is here:";
            cout<<"Maths = "<<maths<<endl;  
            cout<<"Physics = "<<physics<<endl;
        }
};


class Sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total= maths +physics +score;
            print_number();
            print_marks();
            print_score();
            cout<<"Total = "<<total<<endl;
        }
};
int main(){
    Result harry;
    harry.set_number(345);

    harry.set_marks(78,96.5);
    harry.set_score(9);
    harry.display();
    return 0;

}