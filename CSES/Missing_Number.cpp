/*
Problem: Missing Number
Platform: CSES
URL: https://cses.fi/problemset/task/1083/

Approach: Mathematical Sum Formula
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long expected  = 1LL*n*(n+1)/2;

    long long sum = 0;

    for(int i=0; i<n-1; i++){
        int x;
        cin >> x;
        sum+=x;
    }
    cout << expected - sum;

    return 0;

}