// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;
int minValue(int arr[],int n){
    int i;
    int min = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arrayA[] = {2,4,6,8,10};
    int arrayB[] = {1,2,3,4,5};
    int n = 5;
    int minA = minValue(arrayA, n);
    int minB = minValue(arrayB, n);
    cout<<"Minimum Value of array A is: "<<minA<<endl;
    cout<<"Minimum Value of array B is: "<<minB<<endl;
    cout<<"The sum of minimum values is: "<<minA + minB <<endl;
    return 0;
}