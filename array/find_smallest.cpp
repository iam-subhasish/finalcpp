#include<iostream>
using namespace std;
int main(){
    int arr[10],sn;
    //sn to store smallest number
    cout << "Enter 10 numbers : " << endl;
    for(int i=0;i<10;i++)
        cin >> arr[i];
    
    sn = arr[0];
    for(int i=1;i<10;i++){
        if(arr[i] < sn )
            sn = arr[i];
    }


    cout << "The smallest number is : " << sn;

    return 0;
}