#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no.:";
    cin>>n;
    int oddsum = 0;
    for (int i =0; i <=n; i++)
    {
        if(i%2 !=0){
            oddsum += i;
        }
    }
    cout<<"The sum of odd:"<<oddsum;
    return 0;
}