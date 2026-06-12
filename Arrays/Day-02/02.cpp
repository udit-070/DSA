// Check whether an element is present or not and if present return the index of the element

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
    int el;
    cout<<"Enter the element to be searched: ";
    cin>>el;
    for(int i=0; i<size; i++){
        if(el==arr[i]){
            cout<<"The required element is present at "<<i<<" index"<<endl;
            return i;
        }
    }

    cout<<"The element is not present";
    
    return 0;
}