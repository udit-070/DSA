#include<iostream>
using namespace std;

int main(){
    int t;
    cout<< "Enter the no. of Numbers:";
    cin>> t;

    for(int i=1; i <= t; i++){
        int num;
        cin>> num;

        int count =0;

        for(int j =1; j <= num; j++){
            int rem = num % j;

            if(rem==0){
                count++;
            }
        }

        if(count == 2){
            cout<<"It is a prime number"<<endl;
        }
        else{
            cout<< "It is not a prime number"<< endl;
        }

    }


    return 0;
}