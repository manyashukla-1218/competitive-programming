/*
Problem: Repetitions
Platform: CSES
URL: https://cses.fi/problemset/task/1069/

Approach:
- Running counter
- Current consecutive characters count karo.
- Maximum streak update karte jao.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin >> s;

int cur = 1, best = 1;
for(size_t i=1;i<s.size();i++){
    if(s[i]==s[i-1]){
        cur++;
    }
    else{
        cur = 1;
    }
     best  = max(cur, best);
}
 
  cout << best;
}




