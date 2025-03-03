//program to demonstrate the working of all types of functions
#include <iostream>
using namespace std;
class ATM_App{
    public: void Welcome() //no return type no parameter function
{
    cout<<"Welcome to ATM.";
}
private: int pin;
public: string validate() //with return type no parameter function
{
    cout<<"\nEnter Your pin ";
    cin>>pin;
    if(pin==1739){
        return "True";
    }
    else{
        return "False";
    }
}
private: float wamt;
public: float Withdraw(float Bamt){ //with return type with parameter function
    cout<<"\n Enter Amount u want to withdraw ";
    cin>>wamt;
    if(wamt>Bamt){
        cout<<"\n Insufficient Balance";
    }
    else{
        return Bamt-wamt;
    }
}
public: void Display_Balance(float amt){ //with no return type with parameter function
    cout<<"\n Your Balance is "<<amt;
}
};
int main(){
    ATM_App obj;
    string res;
    float res1;
    float amt1=10000.50;
    obj.Welcome();
    res = obj.validate();
    if(res == "True"){
        cout<<"\n Login successful";
        res1= obj.Withdraw(amt1);
        obj.Display_Balance(res1);
    }
}
