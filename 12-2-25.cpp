//write a program to create a class with name MyAPP and with fucntions name Accept() and Display(), Accept() function will accept email and password as parameter and Display() fucntion will display the information entered by the user on screen
/*#include <iostream>
using namespace std;
class MyAPP 
{
    public: void Accept(string email, string password) //formal parameters
    {
        cout<<"\nInformation entered by the user is (Accept)";
        cout<<"\nEmail: "<<email<<"\nPassword: "<<password;
        
    }
};
int main()
{
    MyAPP obj;
    string email1,password1;
    cout<<"\n Enter your email: ";
    cin>>email1;
    cout<<"\n Enter your password: ";
    cin>>password1;
    obj.Accept(email1,password1); //actual parameters
    return 0;
}*/

//write a program to create a class with function name Login() and Display_Info, Login() fucntion will accept Pin(default value 123) from user as parameter and Display_Info fucntion will accept Name, Regno, Marks, Percentage and Grade from user as Parameter and display all information entered by user on screen with "Welcome Mesaage".
#include <iostream>
using namespace std;
class student
{
    public: void welcome(){
        cout<<"Welcome user!";
    }
    public: void Login(int pin){
        if(pin==123){
            cout<<"Login successful";
        }
        else
        {
            cout<<"wrong pin";
        }
    }
    public: void Display_Info(string Name, int RegNo, int Marks, int Percentage, string Grade){
        cout<<"Name: "<<Name<<"\nRegistration number: "<<RegNo<<"\nMarks: "<<Marks<<"\nPercentage: "<<Percentage<<"\nGrade: "<<Grade;
    }
};

int main()
{
    student obj;
    obj.welcome();
    int pin;
    cout<<"Enter pin: ";
    cin>>pin;
    obj.Login(pin);
    string name;
    int RegNo;
    int Marks;
    int Percentage;
    string Grade;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your registration number: ";
    cin>>RegNo;
    cout<<"Enter your marks: ";
    cin>>Marks;
    cout<<"Enter your Percentage: ";
    cin>>Percentage;
    cout<<"Enter your Grade: ";
    cin>>Grade;
    obj.Display_Info(name,RegNo,Marks,Percentage,Grade);
    return 0;

}
