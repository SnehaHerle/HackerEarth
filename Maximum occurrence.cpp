//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/

//Maximum occurrence


// Write your code here
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	char str[1000];
	cin.get(str, 1001);
	int count[256] = {0}; 
    int len = strlen(str); 
    //cout<<len<<endl;
    int max = 0;   
    char result;  

    for (int i = 0; i < len; i++) 
	{ 
        count[str[i]]++; 
        //cout<<count[str[i]]<<endl;
        if (max <= count[str[i]]) 
		{ 
            if (max == count[str[i]]) 
            {
                if(result < str[i])
                {
                    max = count[str[i]]; 
                }
                else
                {
                    max = count[str[i]];
                    result = str[i];  
                }
            }
            else
            {
                max = count[str[i]]; 
                result = str[i];
            }
             
        } 
    }

	cout<<result<<" "<<max; 
    return 0;
}
