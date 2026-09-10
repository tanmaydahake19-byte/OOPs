#include<iostream>
using namespace std;

class Academic
{
public:
    void academicMarks()
    {
        cout<<"Academic Marks:80"<<endl;
    }
};
class Sports
{
public:
    void sportsMarks()
    {
        cout<<"Sports Marks:24"<<endl;
    }
};
class Student:public Academic,public Sports
{
public:
    void display()
    {
        cout<<"Total Performance:Good"<<endl;
    }
};
int main()
{
    Student s1;
    s1.academicMarks();
    s1.sportsMarks();
    s1.display();

    return 0;
}