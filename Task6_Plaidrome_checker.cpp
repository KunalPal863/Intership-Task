#include<iostream>
#include<string>
using namespace std;

bool check_palidrome(string str, int s, int e)
{
    if(s>e)
    {
        return true;
    }
    if(str[s++] != str[e--])
    {
        return false;
    }

    return check_palidrome(str,s,e);
}
int main()
{
    string str;
    int s,e;
    cout<<"Enter the the word or phrase\n";
    getline(cin,str);
     s = 0;
     e = str.length()-1;
    bool ans = check_palidrome(str,s,e);
    if(ans)
    {
        cout<<"Yes It is palidrome";
    }
    else
    {
        cout<<"It is not a palidrome string";
    }

    return 0;
}