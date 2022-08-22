#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    cout << "How many number you want to insert : "<<endl;
    cin >> n;
    cout << "Enter " << n << " number : "<< endl;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Reverse display : " << endl;
    for(int i=n-1;i>=0;i--)
        cout << arr[i] << " ";
    return 0;
}