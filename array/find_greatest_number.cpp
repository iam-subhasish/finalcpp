#include<iostream>
using namespace std;
int main(){
    int arr[10],gn=0;
    // gn is to store greatest number
    cout << "Enter 10 numbers : " << endl;
    for(int i=0;i<10;i++)
        cin >> arr[i];
    
    for(int i=0;i<10;i++)
        if(arr[i] > gn)
            gn = arr[i];

    cout << "The greatest number is : " << gn;
    return 0;
}