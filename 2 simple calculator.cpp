#include<iostream>
using namespace std;
int main()
{
    int Num1, Num2;
    char Op;
    cout<<"Enter the value of Number 1: "<<endl;
    cin>>Num1;
    cout<<"Enter the value of Number 2: "<<endl;
    cin>>Num2;
    cout<<"Enter the operation you want to continue with."<<endl;
    cin>>Op;
    switch(Op)
    {
        case '+':
            cout<<(Num1 + Num2);
            break;

        case '*':
            cout<<(Num1 * Num2);
            break;

        case '/':
            cout<<(Num1 / Num2);
            break;

        case '-':
            cout<<(Num1 - Num2);
            break;

        default:
            cout<<"Error";
    }

return 0;
}
