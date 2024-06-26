#include<iostream>
using namespace std;

void fibo(int n)
{
    int a = -1, b= 1;
    for(int i = 1; i<=n ; i++)
    {
        int c = a + b;
        cout<<c<<" ";
        a = b;
        b = c; 
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fibo(n);
    return 0;
}