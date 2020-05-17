// Will Rick survive or not

// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/will-rick-survive-or-not-2/

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
    int t = 0;
    cin>>t;
    while(t--)
    {
        long int n = 0, i = 0, shot = 0, reload = 0, dead = 0;
        cin>>n;
        unsigned int distance[n]; 
        
        for (i = 0; i < n; i++)
        {
            cin>>distance[i];
        }

		sort(distance,distance+n);  

		for (i = 0; i < n; i++)
		{
			if( distance[i] - shot - reload > 0)
			{
				shot++;
				reload = shot/6;
			}
			else
			{
				//dead = 1;
				break;
			}
		}

		if(shot == n)  //if(dead == 0)
			cout<<"Rick now go and save Carl and Judas"<<"\n";
		else
			cout<<"Goodbye Rick"<<"\n"<<shot<<"\n";

	}
    return 0;
}

/*
Time (sec)

2.82427

 
Memory (KiB)

27080
*/
