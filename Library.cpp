#include<iostream>
using namespace std;
template <class T>
class Library
{
private:
    T bookID;
    string bookName;
    string author;
    bool issued;

public:
    Library(T id, string name, string auth)
    {
        T bookID = id;
        bookName = name;
        author = auth;
        issued = false;
    }

    void display()
    {
        cout << "\nBook Id        : " << bookID;
        cout << "\nBook Name     : " <<bookName;
        cout << "\nAuthor         : " <<author;
        cout << "\nStatus         : ";

        if (issued)
            cout << "Issued";
        else
            cout<< "Available";

        cout << "\n";
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "\nBook issued successfully.";
        }
        else
        {
            cout << "\nBook is already issued.";
        }
    }

    void returnBook()
    {
      if (!issued)
        {
            issued = false;
            cout << "\nBook returned successfully.";
        }
        else
        {
            cout << "\nBook was not issued.";
        }  
    }
};

int main()
{
    Library<int> book1(101, "Object oriented programing", "Robert Lafore");
    Library<string> book2("CS102", "Database Management System", "Korth");

    cout << "====== KIBRARY MANAGEMENT SYSTEM ======\n";

    cout << "\nBook 1 Details:";
    book1.display();

    cout << "\n Book 2 Details:";
    book2.display();

    cout << "\n\n---- Book 1 Issued Operatioon ----";
    book1.issueBook();
    book1.display();

    cout << "\n---- Book 1 Return Operation ----";
    book1.returnBook();
    book1.display();

    return 0;

}
