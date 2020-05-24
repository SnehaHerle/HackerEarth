//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/?layout=old

//Long ATM Queue

#include <bits/stdc++.h>
using namespace std;

/*
1 2 3 4 4 4 4 4 3 7 8

1 2 3 4 4 4 4 4 , 3 7 8  = 2 groups

As it is mentioned that it is not strictly increasing, we can have people of the same height as well. We will consider a group as a single group as long as we have a[i+1] greater than or equal to a[i]. Whenever a[i+1] is smaller than a[i], we can understand that a new group with people standing in increasing order of height has started.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n = 0, i = 0, count = 1;
    cin>>n;
    long long a[n]; 
    a[0] = -1;
    for (i = 1; i <= n; i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
            count++;
    }
    cout<<count;
    return 0;
}
