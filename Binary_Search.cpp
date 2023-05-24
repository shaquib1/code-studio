int search(vector<int>& nums, int target) {

    // Write Your Code Here

  int size=nums.size();
        int left=0;
        int right=size-1;
        //int mid=left + (right-left)/2;
        while(left<=right){
            int mid=left + (right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]>target){
                right=mid-1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
        }
        return -1;

}