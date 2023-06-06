

// This question is another type as compared to leetcode so read first question ok

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    // using stl function
    rotate(nums.begin(), nums.begin() + k, nums.end());

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}