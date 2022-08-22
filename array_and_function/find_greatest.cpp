#include<iostream>
using namespace std;

int find_greatest(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int main(){
    int arr[] = {10,20,77,1,2,78,99};
    int size = sizeof(arr)/sizeof(int);
    int max = find_greatest(arr,size);
    cout << "Greatest number is " << max ;
    return 0;
}