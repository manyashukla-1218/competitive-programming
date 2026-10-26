
/*
Problem: Permutations
Platform: CSES Problem Set
Problem Link: https://cses.fi/problemset/task/1070/

Approach:
1. If n is 2 or 3, print "NO SOLUTION".
2. Print all even numbers from 2 to n.
3. Print all odd numbers from 1 to n.

Time Complexity: O(n)
Auxiliary Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

   if (n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
    return 0;
}
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }

    return 0;
}