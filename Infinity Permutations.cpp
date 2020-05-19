// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/thanos-and-the-infinity-stones/

// Infinity Permutations

/*LOGIC
Find the longest consecutive subsequence in the array.
Since we can move the elements either to the beginning/end of the array,
the position of elements in the longest consecutive subsequence never changes.
We will always pick the remaining elements which are not part of the longest
consecutive subsequence and move them to beginning/end.
And the number of operations will be equal to the number of remaining elements, as we will shift ONLY those.

N = 10
9, 10, 4, 5, 2, 8, 1, 7, 3, 6

Longest consecutive subsequence is 4, 5, 6 whose length is 3.

So we will shift the remaining elements (10 - 3 = 7 elements) either to beginning/end. So number of operations = 7

We use an unordered map and an array to find the longest consecutive subsequence.
Concepts - Hashing, Dynamic Programming.
Time - O(N)
Space - O(N) + O(N) [Unordered Map + DP Array]

Reference - https://www.geeksforgeeks.org/longest-increasing-consecutive-subsequence/
*/

#include <bits/stdc++.h> 
using namespace std; 

//dp[i] stores the longest consecutive increasing subsequence ending with a[i]

long int longestConsecutiveSubsequence(long int a[], long int n) 
{ 
	unordered_map<long int, long int> map; 
	long int dp[n]; 
	memset(dp, 0, sizeof(dp)); 
	long int maximum = INT_MIN; 

	for (long int i = 0; i < n; i++) 
    {   
		if (map.find(a[i] - 1) != map.end()) 
			dp[i] = 1 + dp[map[a[i] - 1]]; 
		else
			dp[i] = 1; 

		map[a[i]] = i; 
		maximum = max(maximum, dp[i]); 
	} 
	return maximum; 
} 
 
int main() 
{ 
	long int n, i;
	cin>>n;
	long int a[n]; 
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	} 
	cout << n - longestConsecutiveSubsequence(a, n); 
	return 0; 
} 
