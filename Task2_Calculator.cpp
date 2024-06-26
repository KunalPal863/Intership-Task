#include<iostream>
using namespace std;

int main()
{
    int choice,a,b;
    cout<<"CHOOSE ONE"<<endl;
    cout<<"1.Add\n2.Subtract\n3.Multiplication\n4.Division\n5.Modulus"<<endl;
    cin>>choice;
    cout<<"Enter the Two Number"<<endl;
    cin>>a>>b;
    switch(choice)
    {
        case 1:
            cout<<"The Sum is "<<a+b;
            break;
        case 2:
            cout<<"The subtraction is "<<a-b;
            break;  
        case 3:
            cout<<"The Multiplication is "<<a*b;
            break;
        case 4:
            cout<<"The Division is "<<(float)a/b;
            break;  
        case 5:
            cout<<"The modulus is "<<a%b;      
    }

    return 0;
    }