//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/prime-string-5e4e5f32/

//Prime String

#include <bits/stdc++.h> 
using namespace std; 

bool isPrime(long long int num)
{
	if(num == 1)
		return 0;
	if(num == 2 || num == 3)
		return 1;

	for(int i = 2; i<=num/2 ; i++)
	{
		if(num%i == 0)
			return 0;
	}
	return 1;
}

int main() 
{ 
	int t;
	//long long int hash[26] = {0}, i, t, count_dist = 0, flag = 1;
	cin>>t;
	while(t--)
	{
       long long int hash[26] = {0}, i, t, count_dist = 0, flag = 1;
       string s;
		cin>>s;
		int len = s.length();
		for(i=0 ; i<len ; i++)
		{
			hash[s[i]-'a']++;
		}
		for(i=0 ; i<26 ; i++)
		{
			if(hash[i]>0)
				count_dist++;
		}
		if(isPrime(count_dist))
		{
			for(i=0 ; i<26 ; i++)
			{
                if(hash[i])
                {
				if(!isPrime(hash[i]))
				{
					cout<<"NO";
                    flag = 0;
					break;
				}
                }
			}
            if(flag == 1)
                cout<<"YES";
		}
        else
            cout<<"NO";
		cout<<endl;	
	}
} 
