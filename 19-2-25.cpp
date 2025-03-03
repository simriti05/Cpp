//constructor and destructor example
/*#include <iostream>
using namespace std;
class Program //class
{
    public: Program() //Default constructor
    {
        cout<<"Default constructor";
    }
    public: ~Program() //Default destructor
    {
        cout<<"\nDestructor";
    }
};
int main()
{
    Program obj; //class object
    return 0;
}*/

//example 2.O
/*#include <iostream>
using namespace std;
class example
{
    public: ~example()
    {
        cout<<"\nDestructor";
    }
    public: example()
    {
        cout<<"constructor";
    }
};
int main()
{
    example obj;
    return 0;

}*/

//Program to use paramterized consructor
#include <iostream>
using namespace std;
class Program
{
    public: Program(string username, int pin){ //Parameterized constructor
    cout<<"\nUsername= "<<username;
    cout<<"\nPin= "<<pin;
    }

};
int main()
{
    Program obj("A1",123);
    Program obj1("A2",321);
    return 0;

}
