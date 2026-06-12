// reverse an array

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int revarr[size];
    cout<<"The reversed array is:"<<endl;
    for(int j=0; j<size; j++){
        
        revarr[j] = arr[(size -1)-j];
        cout<<revarr[j]<<endl;
    }
    return 0;
}