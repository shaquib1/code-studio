#include <bits/stdc++.h> 
int peakValue(vector<int> &arr){
    // Write your code here.


     int s=0; 
        int e=arr.size()-1;
        int m= (s+e)/2;

        while(s<e){
            if(arr[m]<arr[m+1]){
                s=m+1;
            }else {
                e=m;
            }
            m=(s+e)/2;
        }
        return s;
}