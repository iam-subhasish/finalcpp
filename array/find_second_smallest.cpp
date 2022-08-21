#include<iostream>
using namespace std;
int main(){
    int arr[10],small,ssmall;
    cout << "Enter 10 numbers : " << endl;
    for(int i=0;i<10;i++)
        cin >> arr[i];
    small = arr[0];
    ssmall = arr[1];
    for(int i=1;i<10;i++){
        if(arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }else if( arr[i] < ssmall)
            ssmall = arr[i];
    }
    cout << "The second smallest number is : " << ssmall;
    return 0;
}