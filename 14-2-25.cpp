/*write a program to create two classes,
1. Class Login_Details,
with functions as:
a) Validate() accept login password(default 1234) from user
b) Display() display message on screen "Welcome to MyAPP
2. Class User_Profile,
with functions as: 
a) Accept() accept username,email id and name from user
b) Display() will display information entered by the user on screen.
*/
#include<iostream>
using namespace std;
class Login_Details{
    //int pin;
    public: void Validate()
    {
        //int pin;
        //cout<<"\nEnter pin: ";
        //cin>>pin;
        /*if(pin==1234)
        {
            cout<<"Login succesful!";
        }
        else
        {
            cout<<"invalid pin!";
        }*/
        

    }
    public: void Display()
    {
        cout<<"\nWelcome to my MyAPP";
    }
};
class User_Profile
{
    string username;
    string email;
    string name;
    public: void Accept()
    {
        //string username;
        //string email;
        //string name;
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter username: ";
        cin>>username;
        cout<<"\nEnter email: ";
        cin>>email;
        //cout<<"Information entered by user is: ";
       // cout<<"Name"<<name<<"Username"<<username<<"Email"<<email;

    }
    public: void Display()
    {
        cout<<"Information entered by user is: ";
        cout<<"\nName: "<<name<<"\nUsername: "<<username<<"\nEmail: "<<email;

    }

};
int main()
{
    Login_Details obj;
    obj.Display();
    int pin;
    cout<<"\nenter pin: ";
    cin>>pin;
    obj.Validate();
    if(pin==1234)
    {
        cout<<"Login successful!";
    }
    else{
        cout<<"Invalid pin!";
        return 0;
    }
   User_Profile obj1;
   obj1.Accept();
   obj1.Display();

}