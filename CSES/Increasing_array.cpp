/*
Problem: Increasing Array
Platform: CSES
Problem URL: https://cses.fi/problemset/task/1094/

==================================================
Solution 1: Greedy Using Array
Time Complexity: O(n)
Auxiliary Space Complexity: O(n)

Approach:
Store all elements in an array.
If the current element is smaller than the previous one,
increase it to match the previous element and add the
required increments to the total moves.

==================================================
Solution 2: Greedy One Pass (Optimized)
Time Complexity: O(n)
Auxiliary Space Complexity: O(1)

Approach:
Read and process elements one by one.
Maintain only the previous required value and the current
value. Count the required increments without storing
the entire array.

==================================================
Comparison:
Both solutions take O(n) time.
Solution 2 uses less auxiliary space: O(1) instead of O(n).

Selected for submission: Solution 2
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

// Solution 1: Greedy Using Array
long long solveUsingArray(int n) {
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long moves = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            moves += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    return moves;
}

// Solution 2: Greedy One Pass (Optimized)
long long solveOptimized(int n) {
    long long prev, current;
    cin >> prev;

    long long moves = 0;

    for (int i = 1; i < n; i++) {
        cin >> current;

        if (current < prev) {
            moves += prev - current;
        } else {
            prev = current;
        }
    }

    return moves;
}

int main() {
    int n;
    cin >> n;

    // Run only ONE solution because each function reads input.
    cout << solveOptimized(n) << '\n';

    // To test Solution 1 instead, replace the line above with:
    // cout << solveUsingArray(n) << '\n';

    return 0;
}
