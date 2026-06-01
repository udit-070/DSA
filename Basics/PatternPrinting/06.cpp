/*
a a a a a
b b b b b 
c c c c c
d d d d d 
e e e e e 
*/

#include<iostream>
using namespace std;

int main(){
    int row,col;
    char name = 'a';
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            int ascii = (int)name + (row -1);
            cout<< static_cast<char>(ascii)<<" ";
        }
        cout<<endl;
    }
    return 0;
}