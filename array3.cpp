#include<iostream>
using namespace std;

int main()
{
    int nums[]={8,78,69,2,65,-4};
    int size=6;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int i=0; i<size; i++){

        if(nums[i]<smallest){
            smallest=nums[i];
        } 
        if(nums[i]>largest){
            largest=nums[i];
        }
    }

    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;
    return 0;
}