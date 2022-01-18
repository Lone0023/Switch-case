#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your number 1: "<<endl;
    cin>>a;
    cout<<"Enter your number 2: "<<endl;
    cin>>b;

    if(a%3==0  && a%2==0 && b%3==0  && b%2==0){
        cout<<a<<" and "<<b<<" are both divisible by 2 and 3."<<endl;
    }
    //lse if()
    else if(a%3==0 &&  a%2==0 ){
         cout<<a<<" divisible by 2 and 3."<<endl;
    }
    else if(b%3==0 &&  b%2==0 ){
         cout<<b<<" divisible by 2 and 3."<<endl;
    }
    else{
        cout<<a<<" and "<<b<<" is not divisible by neither 2 nor 3."<<endl;
    }
    return 0;

}
