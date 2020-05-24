//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/bracket-sequence-1-40eab940/?layout=old

//Bracket sequences

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	int result = 0, balance = 0, j = 0, i = 0, len = s.length();
	for(i=0 ; i<len ; i++)
	{
		balance = 0;
		j = i;  //for each rotation
		while(j < len + i)
		{
			if(s[j%len] == '(')
			    balance++;
			else
			    balance--;
			
            if(balance < 0)
			    break;
			j++;
		}
		if(balance == 0)  //means the (, ) were balanced for that rotation
		    result++;
	}
	cout<<result;
	return 0;
}
