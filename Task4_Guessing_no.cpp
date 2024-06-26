#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int number,n,flag = 0;
    char ch = 'y';
    number = rand()%100+1; //Automatically generate random number 

    cout<<endl<<"============== GAME RULES ================"<<endl;
    cout<<"-> Please Enter the Number between 0 and 100 "<<endl;
    cout<<"-> You have maximum 7 attempts to guess the number"<<endl<<endl;
    do{
        for(int i = 1;i<=7;i++)
        {
            cout<<"Attempt = "<<i<<endl;
            cout<<"Enter the number "<<endl;
            cin>>n;
            if(n == number)
            {
                cout<<"You guessed the number"<<endl;
                flag = 1;
                break;
            }
            else if(n < number)
            {
                cout<<"Higher Number Please!"<<endl<<endl;;
            }
            else
            {
                cout<<"Lower Number Please!"<<endl<<endl;
            }

        }
            if(flag == 1)
            {
                cout<<"You win "<<endl;
            }
            else
            {
                cout<<"You lose "<<endl;
            }
        cout<<"Do you want to continue (press y)"<<endl;
        cin>>ch;
    }while(ch == 'y');

    cout<<"======================== FINISHED =========================="<<endl;
    return 0;
    }