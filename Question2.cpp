// Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101 

#include<iostream>
using namespace std;
int maxValue(int arr[],int n){
    int i;
    int max = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

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
    int array[] = {2,4,6,8,10};
    int n = 5;
    int max = maxValue(array, n);
    int min = minValue(array, n);
    cout<<"Maximux Value of this array is: "<<max<<endl;
    cout<<"Minimum Value of this array is: "<<min<<endl;
    cout<<"The sum of maximum and minimum value is: "<<max + min <<endl;
    return 0;
}