// Remove minimum element from the array

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"enter the elements of the array: ";

    for(int i; i < size; i++){
        cin>>arr[i];
    }

    int min = arr[0];

    for(int j =0; j < size; j++){
        if(arr[j] < min){
            min = arr[j];
        }
    }

    cout<<"the minimum element of the array is: "<<min<<endl;

    return 0;
}