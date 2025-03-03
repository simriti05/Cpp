//Write a program to take two numbers as input and display their sum.
/*#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    cout<<"Sum is: "<<a+b;
    return 0;
}*/

//Write a program that checks whether a given number is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter some number";
    cin>>n;
    if(n % 2 ==0)
    {
        cout<<"The entered number is even.";
    }
    else
    {
        cout<<"The entered number is odd.";
    }
    return 0;
}

//Write a program to find the largest of three numbers.
/*#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers.";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        cout<<"The largest number is: "<<a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"The largest number is: "<<b;
    }
    else
    {
        cout<<"The largest number is: "<<c;
    }

    return 0;
}*/

//Write a program to calculate the factorial of a number.
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int fac = 1;
    for(int i=1;i<=n;i++)
    {
        fac *= i;
    }
    cout<<"Factorial of the entered number is: "<<fac;
    return 0;
}*/
