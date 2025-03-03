/*Program to demonstrate implementation of array using direct initialization method*/
/*#include<iostream>
using namespace std;
class Program
{
    private: int adv[5] = {1,2,3,4,5}; //Declaration and direct initialization
    int weak[5] = {6,7,8,9,10};
    int i;
    public: void Display()
    {
        cout<<"List of advance learners\t";
        for(i=0;i<5;i++)
        {
            cout<<adv[i]<<"\t";
        }
        cout<<"\nList of weak learners\t\t";
        for(i=0;i<5;i++)
        {
            cout<<weak[i]<<"\t";
        }
    }
};
int main()
{
    Program obj;
    obj.Display();
    return 0;
}*/

//Program to demonstrate working of array of object
/*#include<iostream>
using namespace std;
class Books_Record
{
    private: int BookNo; string BookName;
    public: Books_Record(int B, string N) //Parameterized Class
    {
        BookNo=B;
        BookName=N;
    }
    public: void Display()
    {
        cout<<"\nBook Number is"<<BookNo<<"\tBook Name is"<<BookName;
    }
};
int main()
{
    Books_Record obj[5] = {{1,"CPP"},{2,"Java"},{3,"C"},{4,"C#"},{5,"PHP"}}; //
    int i;
    for(i=0;i<5;i++)
    {
        obj[i].Display(); 
    }
}*/

/*Write a program 
create a class Student_Management_System
stores student information(Name,Registration Number,Mobile Number) of 10 students
display records using array of object*/
#include <iostream>
using namespace std;
class Stu_info
{
    public: string name;int registrationNo,mobileNo;
    public: Stu_info(string N, int R, int M)
    {

    }
};
