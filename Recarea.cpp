#include <iostream> 
using namespace std; 
class Rectangle 
{
    private:    
    int length, breadth;
    public:
    Rectangle() 
    {        
        length = 0;       
        breadth = 0;
    }
    Rectangle(int s)
    {        
        length = s;       
        breadth = s;
    }
    Rectangle(int l, int b) 
    {       
        length = l;        
        breadth = b;    
    }   
    int area()
    {
       return length * breadth;
    }
    void display() 
    {       
        cout << "Length = " << length << ", Breadth = " << breadth             << ", Area = " << area()<< endl;   
    } 
};
int main() 
{  
     Rectangle r1;        
     Rectangle r2(5);      
     Rectangle r3(4, 6);  
     r1.display();  
     r2.display();  
     r3.display();  
     return 0;
}
