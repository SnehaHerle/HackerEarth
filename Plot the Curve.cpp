//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/lets-plot-this-47a575ed/description/

//Plot the Curve



#include <bits/stdc++.h>
using namespace std;


//to take care of negative modulo as well
long long int mod(long long int a, long long int m)
{
    return ((a%m) + m)%m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int n = 0, a = 0, b = 0, c = 0, d = 0, m = 0, res = 0, 
        i = 0, count = 0, single = 0, square = 0, cube = 0;
        cin>>a>>b>>c>>d>>m>>n;
        unordered_map<long long int, long long int> hash;
        long long int arr[n];

        //hash stores y^2 values
        for(i = 0; i<n; i++)
        {
            cin>>arr[i];
            hash[ mod(arr[i]*arr[i], m) ]++;
        }

        //compute ax^3 + bx^2 + cx + d for each, and check if result is in hash
        for(i = 0; i<n ; i++)
        {
            res = 0;
            single = mod(arr[i],m);
            square = mod(single*arr[i],m);
            cube = mod(square*arr[i],m);
            res = mod(cube*a, m);
            res = mod(res + mod(square*b, m), m);
            res = mod(res + mod(single*c, m), m);
            res = mod(res + d, m);
            count = mod(count + hash[res],(pow(10, 9) + 7));
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}
