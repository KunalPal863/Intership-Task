#include<iostream>
using namespace std;

void sort(int arr[] , int n)
{
    for(int i = 0; i<n-1 ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void print(int arr[] , int n)
{
    for(int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enetr the array elemnet"<<endl;
    for(int i = 0 ; i<n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    print(arr,n);

    return 0;
}