#include<iostream>
using namespace std;
int main(){
    int arr[10],large,slarge;
    cout << "Enter 10 numbers : " << endl;
    for(int i=0;i<10;i++)
        cin >> arr[i];

    large = arr[0];
    slarge = arr[1];
    for(int i=1;i<10;i++){
        if(arr[i] > large){
            slarge = large;
            large = arr[i];
        }else if(arr[i] > slarge)
            slarge = arr[i];
    }
    cout << "The second largest number is : " << slarge;
    return 0;
}