#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int pos=s.rfind(' ');
    
    cout<<s.size()-(pos+1)<<endl;
    
    return 0;
}