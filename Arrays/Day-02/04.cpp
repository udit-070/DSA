// Second largest element

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {34, 45, 23, 15, 78};
    int maxi= arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    int sec_max = arr[0];
    for(int j=0; j<5; j++)
    {
        if(arr[j] != maxi)
        {
            sec_max = max(sec_max, arr[j]);
        }
    }

    cout<< sec_max<<endl;


}