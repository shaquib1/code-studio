

 int findpivot(vector<int>& arr, int n){
         int s=0;
          int e=n-1;
          int m=(s+e)/2;

          while(s<e){
              if(arr[m]>=arr[0]){
                
                  s=m+1;

              } else {
                e = m;
              }

              m = (s + e) / 2;
          }
          return s;
 }

int binarysearch(vector<int>& arr, int s,int e, int k){

    int start=s; 
    int end=e;
    int mid=(start+end)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }

        if(arr[mid]<k){
            start=mid+1;
        }else {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

        int pivot=findpivot(arr, n);
        if(k>=arr[pivot]&&k<=arr[n-1]){
           return  binarysearch(arr, pivot , n, k);
        }else{
            return binarysearch(arr, 0, pivot-1,  k);
        }



}
