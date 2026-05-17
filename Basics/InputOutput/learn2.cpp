// Instead of writing std:: again and again, we can write something like 'using namespace std' before int main

#include<iostream>
using namespace std;

int main(){

    int x;
    cin >> x;

    cout<< "The value entered is:" << x;
    return 0;
}