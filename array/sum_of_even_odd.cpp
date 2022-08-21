#include<iostream>
using namespace std;
int main(){

    int arr[10],os=0,es=0;
    //os for odd sum and es for even sum 
    cout << "Enter 10 numbers : " << endl;
    for (int i=0;i<10;i++)
        cin >> arr[i];
    
    for(int i =0;i<10;i++)
        if(arr[i] % 2 == 0)
            es += arr[i];
        else
            os += arr[i];
        
    cout << "sum of all even numbers : " << es << endl << "sum of all odd number : " << os;
    return 0;
}