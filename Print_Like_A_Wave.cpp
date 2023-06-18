#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here

    vector<int> ans;

    

    for(int i=0; i<mCols; i++){
        if(i==0||i%2==0){
          
             for(int j=0; j<nRows; j++){
              // cout<<arr[j][i]<<" ";
               ans.push_back(arr[j][i]);
           }


        }else{
           for(int j=nRows-1; j>=0; j--){
               // cout<<arr[j][i]<<" ";
                 ans.push_back(arr[j][i]);
            }

        }
    }
    
    return ans;

}