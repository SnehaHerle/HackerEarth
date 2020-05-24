//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charged-up-array-f35a5e23/?layout=old

//Charged Up Array




#include<bits/stdc++.h>
using namespace std;

int solve (vector<long long> A) {
   // Write your code here
   long long s=0;
   long long mod=1000000007;
   int n=A.size();
   if(n>=61)
   return 0;
   long long p=(long long)pow(2,n-1);
   for(int i=0;i<n;i++)
   {
       if(A[i]>=p)
        {
            s=s+A[i]%mod;
        }
   }
   return (int)(s%mod);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}
