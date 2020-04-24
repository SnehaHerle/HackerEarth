//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
//Toggle String


#include<iostream>
using namespace std;

void toggleChars(string str) 
{ 
    for (int i=0; str[i]!='\0'; i++) 
    { 
        if (str[i]>='A' && str[i]<='Z') 
            str[i] = str[i] + 'a' - 'A'; 
        else if (str[i]>='a' && str[i]<='z') 
            str[i] = str[i] + 'A' - 'a'; 
    } 
	cout<<str;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
	toggleChars(s);
    return 0;
}
