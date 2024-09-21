#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Your Marks:";
    cin>>n;
    if(n>90){
        cout<<"A";
    }else if(n>=80 && n<90){
        cout<<"B";
    }else if(n>=70 && n<80){
        cout<<"C";
    }else{
        cout<<"Fail";
    }
    return 0;
}