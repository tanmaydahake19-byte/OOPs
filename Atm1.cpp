#include<iostream>
#include<string>
using namespace std;

class Atm
{
private:
    int Accno;
    string name;
    float balance;


public:
    Atm(int a,string n,float b)
    {
        Accno=a;
        name=n;
        balance=b;
    }

    void deposit(int amt)
    {
        balance+=amt;
        cout<<"Amount Deposited successfully."<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    void withdraw(int amt)
    {
        if(balance>=amt)
        {
            balance-=amt;
            cout<<"money withdrawn successfully."<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
        else
            cout<<"insufficient Balance"<<endl;
    }
    void display()
    {
        cout<<"balance:"<<balance<<endl;
    }

};
int main()
{
    
    Atm a(111,"Tanmay",3000);
    a.deposit(5000);
    a.display();
    a.withdraw(2000);
    a.display();
    return 0;
}