#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream onFile;
    string str;
    char character;
    
    onFile.open("D:\\Internship\\file1.txt");
    cout<<"1st File Created Succesfully"<<endl;
    cout<<"Enter the phrases"<<endl;
    getline(cin,str);
    onFile<<str;
    cout<<"THE DATA HAS BEEN WRITTEN IN THE FILE"<<endl;
    onFile.close();
    inFile.open("D:\\Internship\\file1.txt");
    onFile.open("D:\\Internship\\file2.txt");
    while(inFile.get(character))
    {
        onFile.put(character);
    }
    cout<<"Copied into another file !!"<<endl;
    inFile.close();
    onFile.close();
}