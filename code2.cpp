#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    char c=str2[str2.length()-1];
    int count=0;
    for(int i=0;i<str1.length();i++)
        if(str1[i] == c)
            ++count;
    
    cout << count;
    return 0;
}

