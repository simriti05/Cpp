//WAP to print your name, age and city and pin code on screen(using class).
/*#include <iostream>
using namespace std;
class Display
{
    public: void print(){
        cout<<"Name: Simriti Pandita"<<"\nAge: 20"<<"\nCity: Jammu"<<"\nPin code: 180002";
    }
};
int main()
{
    Display obj;
    obj.print();
    return 0;
}*/

//WAP to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'SetDim' takes the length and breadth of the rectangle as parameters and the second function named as 'GetArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

/*#include <iostream>
using namespace std;
class Area{
    private: float a;
    public: void SetDim(float length, float breadth){
        //cout<<"Enter length"<<length;
        
        //cout<<"Enter breadth"<<breadth;
        a=length*breadth;
    }
    public: float GetArea()
    {
        return a;

    }
};
int main()
{
    Area obj;
    float length,breadth;
    float a;
    cout<<"Enter length ";
    cin>>length;
    cout<<"Enter breadth ";
    cin>>breadth;
    obj.SetDim(length,breadth);
    a=obj.GetArea();
    cout<<"Area of rectangle is: "<<a;
    return 0;
}*/

//WAP to display addition,subtraction,multiplication and division of two integers on screen.
/*Declare Class Calculation 
Declare data member num1 and num2 in private section
write member function for initialize num1 and num2
Write member function for each operation.*/
/*#include <iostream>
using namespace std;
class Calculation
{
    public: int num1,num2;
    public:
    int a,s,m,d; 
    public: int sums()
    {
        cout<<"enter number 1: ";
        cin>>num1;
        cout << "enter number 2: ";
        cin >> num2;

        a=num1+num2;
        s=num1-num2;
        m=num1*num2;
        d=num1/num2;
    } 
    void display(){
        cout << "Add : " << a << "\nSub : " << s << "\nMultiply : " << m << "\nDivision : " << d;
    }

};
int main()
{
    Calculation obj;
    obj.sums();
    obj.display();
}*/


//WAP to find area of circle. Area of circle=Pi*r*r where Pi=3.14
/*#include <iostream>
using namespace std;
class area{
    public: int r;
    public: float P=3.14,A;
    public: void circle(){
        cout << "Enter the value of radius = ";
        cin >> r;
    }
        void Area(){
        A=P*r*r;
        cout<<"Area = "<<A;
        }

};
int main()
{
    area obj;
    obj.circle();
    obj.Area();
}*/

//Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:
//StudentID,name,sem,branch.
/*#include <iostream>
using namespace std;
class Details
{
    public: string Name,Sem,Branch;
    public: int StudentID;
    public: void info()
    {
        cout<<"Enter Student ID: ";
        cin>>StudentID;
        cout<<"Enter your name: ";
        cin>>Name;
        cout<<"Enter semester: ";
        cin>>Sem;
        cout<<"Enter your branch: ";
        cin>>Branch;
    } 
    public: void Display_Info(){
        cout<<"StudentID: "<<StudentID<<"\nName: "<<Name<<"\nSemester: "<<Sem<<"\nBranch: "<<Branch;
    }
};
int main()
{
    Details obj;
    obj.info();
    obj.Display_Info();
}*/

/*Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:
AccountNo,Balance;
The withdrawal function should return remaining balance to the user and should deduct withdrawal amount from balance. If withdrawal amount>balance print appropriate message on screen(Not enough balance)
The deposit function should return updated balance to user.*/
#include<iostream>
using namespace std;
class ATM
{
    private: 
    int AccNo=040505;
    float balance=100000.50;
    public: void fnc1()
    {
        cout<<"Enter Account Number: ";
        cin>>AccNo;
        if(AccNo=040505)
        {
            cout<<"Login succesfull!";
        } 
        else{
            cout<<"Wrong Account number: ";
        }
    }
    public: float fnc2()
    {       

    }

};
int main()
{
    ATM obj;
    obj.fnc1();

}


