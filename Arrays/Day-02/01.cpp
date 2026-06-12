// Search an eleement in an array whether present or not

#include<iostream>
using namespace std;
int main(){

    cout<<"Enter the size of the array: ";
    int size;

    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched: ";
    int el;
    cin>>el;

    for(int j=0; j<size; j++){
        if(el==arr[j]){
            cout<<"The element "<<el<<" is present in the array"<<endl;
            break;
        }
    }
    cout<<"The element "<<el<<" is not present in the array"<<endl;

    return 0;
}