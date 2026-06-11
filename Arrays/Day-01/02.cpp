// Find maximum element of the array

#include<iostream>
using namespace std;
int main(){

    int size, i ,j;

    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];

    for(i =0; i < size; i++){
        cin>>arr[i];
    }

    int max = arr[0];

    for(j=0; j<size; j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }

    cout<< "The maximum element of the array is: "<<max<<endl;

    return 0;
}