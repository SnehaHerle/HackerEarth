//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pairs-having-similar-element-eed098aa/description/?layout=old

//Pairs Having Similar Elements

//Combinatorics, forming pairs

#include <bits/stdc++.h>
using namespace std;
 
using namespace std;
 
long long SimilarElementsPairs(vector<int> A, int N)
{
    sort(A.begin(),A.end());   //sort the elements

    long long int ans = 0;
 
    for(int i = 1; i < N; i++) 
    {
        long long int distinct = 1, num = 1;
        while((A[i] == A[i-1]) or (A[i] == A[i-1]+1))
        {
            num++;

            if(A[i] == A[i-1]) 
               distinct++;

            i++;
        }
        //to check if all the digits were duplicates or if only 1 number is there
        //in both these cases we can't form pairs
        if(num != 1 and distinct != num)   
            ans += (num*(num-1))/2;        //N C 2 to find the number of pairs
    }
    return  ans;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }
 
    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
    return 0;
}


