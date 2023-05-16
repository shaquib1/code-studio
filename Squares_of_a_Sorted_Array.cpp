#include <bits/stdc++.h> 
vector < int > sqsorted(vector < int > & arr) {
    // Write your code here.

   vector<int> v;
    int i = 0,j = arr.size()-1;
    while (i <= j){
        int left_val = arr[i] * arr[i];0
        int right_val = arr[j] * arr[j];
        if (left_val <= right_val){
            v.push_back(left_val);
            i += 1;
    }
    else{
            v.push_back(right_val);
            j -= 1;
        }

}
    sort(v.begin(),v.end());
    return v;
}