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
   

// Another approach if we want to do it using one array only.

    int start=0, end= (size -1);

    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;;
    }


 return 0;
}