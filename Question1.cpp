// Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;
void count(int arr[],int n){
    int count_odd = 0;
    int count_even = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            count_odd++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            count_even++;
        }
    }
    cout<<"Odd Number in Array: "<<count_odd<<endl;
    cout<<"Even Number in Array: "<<count_even<<endl;
}
int main(){
    cout<<"---------------------------\n";
    int arr[] = {2,4,6,8,10};
    int n = 5;
    count(arr,n);
    cout<<"---------------------------\n";
}