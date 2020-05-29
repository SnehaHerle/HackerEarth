//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/bracket-sequence-1-40eab940/description/?layout=old

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    long long int len = str.length(), top = 0,  count = 0, i = 0;
    char a[5000000];  //stack
    a[0] = str[0];
    for(i=1 ; i<len ; i++)
    {
        if(top == -1)
        {
            top++;
            a[top] = str[i];
            //cout<<"1. top "<<a[top]<<endl;
            
        }
        else if(str[i] == a[top])
        {
            top++;
            a[top] = str[i];
            //cout<<"2. top "<<a[top]<<endl;
        }
        else
        {
            if(a[top] == ')' && str[i] == '(')
            {
                top--;
                count++;
                //cout<<"3. top "<<a[top]<<endl;
            }
            else if(a[top] == '(' && str[i] == ')')
            {
                top--;
                //cout<<"4. top "<<a[top]<<endl;
            }
            
        }    
    }
    while(top>0)
    {
        top--;
        count++;
        //cout<<"5. top "<<a[top]<<endl;
    }
    cout<<count;
    return 0;
}
