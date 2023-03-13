// Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include<iostream>
using namespace std;

int missingValue(int arr[],int n){
    int missing=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int range_sum=(n)*(n+1)/2;
    missing=range_sum-sum;
    return missing;
}

int main(){
    int dataarr[] = {3,4,1,2};
    int n = sizeof(dataarr) / sizeof(dataarr[0]); 
    cout<<missingValue(dataarr,n);

    return 0;
}