#include<iostream>
using namespace std;
int main(){
    int arr[10],sum =0;
    float avg;
    cout << "Enter 10 numbers :" << endl;
    for(int i=0;i<10;i++)
        cin >> arr[i];

    for(int i=0;i<10;i++)
        sum += arr[i];
    avg = sum /10.0;
    cout << "Average is : " << avg ;
    return 0;
}