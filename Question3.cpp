// Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int i;
    cout<<"Array: ";
    for(i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array[] = {2,4,6,8,10};
    int n = 5;
    reverseArray(array,n);
    return 0;
}