// Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements to its left are smaller than it and all the elements to the right of it are larger than it.Here 1<n<101

#include<iostream>
using namespace std;

int main(){
    int dataArr[] = {1,6,5,7,10,8,9};
    // int dataArr[] = {5,6,2,8,10,9};
    int size = sizeof(dataArr) / sizeof(dataArr[0]);
    for (int i = 1; i < size - 1; ++i){
        int j = i - 1;
        int k = i + 1;
        while (dataArr[j] < dataArr[i] && dataArr[k] > dataArr[i]){
            if(j == 0 && k == size - 1){
                cout<<dataArr[i];
                return 0;
            }
            if(j > 0){
                j--;
            }
            if(k < size){
                k++;
            }
        }
    }
    cout<< -1; 
    return 0;
}