//program to demonstrate the working of function with no return type and no parameter.
/*#include<iostream>
using namespace std;
class Program{
    public: void fun()
    {
        cout<<"Hi";
    }
};
int main(){
    Program obj;
    obj.fun();
    return 0;
}*/

//program to create a class with product_info and with a function with name Welcome_mesaage(), this function on execution will display a message on screen, "Welcome to my store".
/*#include<iostream>
using namespace std;
class Product_info{
    public: void Welcome_mesaage(){
        cout<<"Welcome to my store.";
    }
};
int main(){
    Product_info obj;
    obj.Welcome_mesaage();
    return 0;
}*/

/*
#include <iostream>
using namespace std;
class Program{
    private: string Name;
    private: int RegNo;
    public: void Accept(){
        cout<<"\nEnter your name ";
        cin>>Name;
        cout<<"\nEnter your registration number ";
        cin>>RegNo;
        cout<<"\nInformation entered by the user is:";
        cout<<"\nName= "<<Name<<"\nRegistration number is: "<<RegNo;
    }
};
int main(){
    Program obj;
    obj.Accept();
    return 0;
}*/

//write a program to create a class with name MyAPP and with functions name, Accept() and Display(), Accept() function will accept email and password from user and Display() function will display the information entered by the user on screen
#include<iostream>
using namespace std; 

    class MyAPP{
        private:string em;
        private:string ps;
        public: void Accept()
        {
            cout<<"enter your email:";
            cin>>em;
            cout<<"\nenter your password:";
            cin>>ps;
        }
        public: void Display()
        {
            cout<<"Your email is: "<<em<<"\n"<<"Your password is: "<<ps;
        }
    };
int main(){
    MyAPP obj;
    obj.Accept();
    obj.Display();
    return 0;
}


