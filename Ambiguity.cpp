#include<iostream>
using namespace std;

class greet
{
public:
    void show()
    {
        cout<<"Hello"<<endl;    
    }
};
class name
{
public:
    void show()
    {
        cout<<"Tony!"<<endl;   
    }
};
class Derived:public Base1,public Base2
{
        
};
int main()
{
    Derived d1;
    //d1.show(); ambiguity occurs
    d1.Base1::show();
    d1.Base1::show();
    d1.Base2::show(); 
    return 0;
}
