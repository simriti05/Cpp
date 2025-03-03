/*Write a program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using parameterized constructor.*/
/*#include <iostream>
using namespace std;
class Area
{
    public: Area(int length, int breadth)
    {
        int area = length * breadth;
        cout<<"Area of the rectangle is: "<<area;
    }
};
int main()
{
    int l,b;
    cout<<"Enter value of length: ";
    cin>>l;
    cout<<"Enter value of breadth: ";
    cin>>b;
    Area obj(l,b);
    return 0;
}*/

/*WAP to display addition,subtraction,multiplication and division of two integers on screen.
Declare class calculation
Write parameterized constructor for initialize num1 and num2
Write member function for each operation. (member function are the values we initialize in class [here a1 and b1])*/
/*#include<iostream>
using namespace std;
class operations
{
    public: int a1,b1;
    public: operations(int a, int b)
    {
        a1 = a;
        b1 = b;
        int add = a1 + b1;
        int sub = a1 - b1;
        int mul = a1 * b1;
        int div = a1 / b1;
        cout << "Addition = " << add << "\nSubtraction = "<<sub<<"\nMultiplication =  "<<mul<<"\nDivision = "<<div;
    }
};
int main()
{
    int a,b;
    cout<<"Enter value of number 1: ";
    cin>>a;
    cout<<"Enter value of number 2: ";
    cin>>b;
    operations obj(a,b);
    return 0;
}*/

/*WAP to calculate volume of cube usign parameterized constructor.*/
/*#include<iostream>
using namespace std;
class volume
{
    public: volume(int l)
    {
    int vol = l * l * l;
    cout<<"Volume of cube is: "<<vol;
    }
};
int main()
{
    volume obj(2);
    return 0;
}*/

//Wap to calculate area of box using parameterized constructor

/*Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking following private data members:
AccountNo,Balance;
Account no and balance data memeber intialize using parameterized constructor
write three function 1.Deposit 2.Withdraw 3.Balance
Write menu driven choice
1.Deposit
2.Withdraw
3.Balance
4.exit
Program stop execution when user enter choice
*/

#include <iostream>
#include <cstdlib>
using namespace std;
class ATM_App
{
    private: int AccNo;
    public: float prebalance = 15000.95;
    float deposit,newbalance,draw;
    public: void Deposit()
    {
        
        cout<<"Previous Balance: 15000.95";
        cout<<"\nEnter amount to deposit: ";
        cin>>deposit;
        newbalance = prebalance + deposit;
        cout<<"\nNew balance is: "<<newbalance;
    }
    public: void Withdraw()
    {
        cout<<"\nPrevious Balance: 15000.95";
        cout<<"\nEnter amount to withdraw: ";
        cin>>draw;
        newbalance = prebalance - draw;
        cout<<"\nRemaining balance is: "<<newbalance;
    }
    public: void Balance()
    {
        cout<<"\nAccount balance is: "<<prebalance;
    }
    public: void exit()
    {
        cout<<"Thank you!\n";
        terminate();
    }
    
};
int main()
{
    int AccNo,c;
    cout<<"Enter account number: ";
    cin>>AccNo;
    if(AccNo == 1111)
    {
        cout<<"Welcome to my ATM";
        cout<<"\nSelect one from choice: \n1.Deposit \n2.Withdraw \n3.Balance \n4.Exit\n" ;
        cin>>c;
    }
    else
    {
        cout<<"Invalid account number";
    }
    if(c==1)
    {
        ATM_App obj;
        obj.Deposit();
    }
    else if(c==2)
    {
        ATM_App obj;
        obj.Withdraw();
    }
    else if(c==3)
    {
        ATM_App obj;
        obj.Balance();
    }
    else if(c==4)
    {
        ATM_App obj;
        obj.exit();
    }
}


