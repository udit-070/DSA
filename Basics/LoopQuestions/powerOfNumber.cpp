#include<iostream>
using namespace std;

int main(){
    int num, pow;
    cout<< "Enter the number:";
    cin>> num;

    cout<<"Enter the Power:";
    cin>>pow;
    int n = num;
    for(int i =1; i< pow; i++){
        num = num*n;
    }
    
    cout<<"The required power of the number is: "<<num;

    return 0;
}