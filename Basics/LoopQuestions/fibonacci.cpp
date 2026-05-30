#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the term of fibonacci series: ";
    int n;
    cin>>n;

    int i,last =0, prev = 1, curr;

    for(i =3; i<=n;i++){
        curr = prev + last;
        last = prev;
        prev = curr;
    }

    cout << "The "<<n<<"th term of the fibonacci series is: "<<curr<<endl; 
    return 0;
}