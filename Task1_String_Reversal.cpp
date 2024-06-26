#include<iostream>
#include <string.h>
using namespace std;

string reversal(string word)
{
    int s = 0;
    int e = word.size()-1;   //To calculate the length of the string
    while(s<e)
    {
        char a = word[s];
        word[s] = word[e];
        word[e] = a;
        s++;
        e--;
    }
    return word;
}
int main()
{
    string word;
    cout<<"Enter the String"<<endl;
    cin>>word;
    cout<<"----------------After String reversal-------------- "<< endl;
    cout<< "The String is "<<reversal(word)<<endl;
    return 0;
}