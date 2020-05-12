// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/kth-character-2/

// Kth Character


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
    long long int N, Q;
    cin>>N>>Q;
    string S;
    cin>>S;
    vector<vector<int> > vec( N+1 , vector<int> (27, 0));

    /*
    PRE_PROCESSING :
    ababc
    1  1 0 0 0 0 ............. till Z
    2  1 1 0 0 0 ............. till Z
    3  2 1 0 0 0 ............. till Z
    4  2 2 0 0 0 ............. till Z
    5  2 2 1 0 0 ............. till Z
    */

    for(int i=0 ; i<S.length() ; i++)
    {
        vec[i+1][S[i]-'a'+1]++;
        
    }
    
    for (int i = 2; i <= N; i++) 
    { 
        for (int j = 1; j <= 26; j++)
        { 
            vec[i][j] += vec[i-1][j]; 
        } 
    }
    
    while(Q--)
    {
        long long int L,R,K, count = 0;
        cin>>L>>R>>K;
        if(L==1)  //If L is 1, then vec[R][j] will give the answer.
        {
            for(int j = 1; j<=26 ; j++)
            {
                count = count + vec[R][j];
                if(count>=K)
                {
                    cout<<char(j+'a'-1)<<"\n";
                    break;
                }
            }
        }
        else  //If L is not 1, then vec[R][j] - vec[L-1][j] will give the answer.
        {
            vector<vector<int> > vec_temp( 2 , vector<int> (27, 0));
            
            for(int i = 1 ; i<=26 ; i++ )
            {
                vec_temp[1][i] = vec[R][i] - vec[L-1][i];
            }
            
            for(int j = 1; j<=26 ; j++)
            {
                count = count + vec_temp[1][j];
                if(count>=K)
                {
                    cout<<char(j+'a'-1)<<"\n";
                    break;
                }
            }

        }
    } 
    return 0;
}
