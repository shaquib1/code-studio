#include <bits/stdc++.h> 


int sumOfMaxMin(int arr[], int n){
	// Write your code here.

     // 1st sort answer 
	//sort(arr,arr+n);
	//return arr[0]+arr[n-1];

	// 2nd answer

     int max=INT_MIN;
	 int min=INT_MAX;

	 for(int i=0; i<n; i++){

		 if(arr[i]>=max){
			 max=arr[i];
		 }
		 if(arr[i]<=min){
			 min=arr[i];
		 }
	 }

	   return min+max;
	
}