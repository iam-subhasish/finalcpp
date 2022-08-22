#include<iostream>
using namespace std;
int main(){
    int arr[20],cpy[20],n;
    cout <<"how many naumbers you want to insert : " << endl;
    cin >> n;
    cout << "Enter " << n << " numbers : " << endl;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++)
        cpy[i] = arr[i];
    cout << "Printing both : " << endl;
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    for(int i=0;i<n;i++)
        cout << cpy[i] << " ";
    return 0;
}