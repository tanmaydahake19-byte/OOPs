#include<iostream>
using namespace std;
class student
{
public:
    void getStudent()
    {
        cout<<"Student details"<<endl;
    }
};
class result:public student
{
public:
    void displayResult()
    {
        cout<<"Result:Pass"<<endl;
    }
};
int main()
{
    result r;

    r.getStudent();
    r.displayResult();

    return 0;
}