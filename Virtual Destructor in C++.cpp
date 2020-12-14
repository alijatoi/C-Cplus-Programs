/*
A destructor in C++ is a member function of a class used to free the space occupied by or delete an object of the class that goes out of scope. 
A destructor has the same name as the name of the constructor function in a class, but the destructor uses a tilde (~) sign before its function name.
Virtual Destructor
A virtual destructor is used to free up the memory space allocated by the derived class object or instance while deleting instances of the 
derived class using a base class pointer object. A base or parent class destructor use the virtual keyword that ensures both base class and the
derived class destructor will be called at run time, 
but it called the derived class first and then base class to release the space occupied by both destructors.
*/
#include<iostream>  
using namespace std;  
class Base  
{                              
    public: /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */  
    Base() // Constructor function.   
{  
    cout<< "\n Constructor Base class";  
}  
 ~Base() // Destructor function   
{  
    cout<< "\n Destructor Base class";  
}  
};  
  
class Derived: public Base  
{  
    public: /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */  
    Derived() // Constructor function   
{  
    cout << "\n Constructor Derived class" ;  
}  
 ~Derived() // Destructor function   
{  
    cout << "\n Destructor Derived class" ; /* Destructor function is not called to release its space. */  
}         
};  
int main()  
{  
    Base *bptr = new Derived; // Create a base class pointer object   
       delete bptr; /* Here pointer object is called to delete the space occupied by the destructor.*/  
}   
