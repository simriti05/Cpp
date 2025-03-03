#include <iostream>
using namespace std;
class Area
{
    private: float res=0;float l1;float b;
    public: Area(float radius) //function 1
    {
        res = 3.14 * radius * radius;
        cout<<"\nArea of circle is: "<<res;
    }
    public: Area(float l,float h) //function 2
    {
        res = 0.5 * l * h;
        cout<<"\nArea of triangle is: "<<res;
    }
    public: Area() //function 3
    {
        l1=6,b=9;
        res = l1 * b;
        cout<<"\nArea of Rectangle is: "<<res;
    }
};
int main()
{
    Area obj1;
    Area obj2(8);
    Area obj3(8,9);

    
}