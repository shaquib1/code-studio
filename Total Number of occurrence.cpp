


int firstOccur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int m = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (arr[m] > k)
        {
            e = m - 1;
        }
        else if (arr[m] < k)
        {
            s = m + 1;
        }
        m = (s + e) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int m = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] > k)
        {
            e = m - 1;
        }
        else if (arr[m] < k)
        {
            s = m + 1;
        }
        m = (s + e) / 2;
    }
    return ans;
}

int count(int arr[], int n, int k)
{
	//Write your code here
	int first = firstOccur(arr,n,k);
	int last = lastOccur(arr,n,k);
	if( first== -1 && last == -1){
return 0;
return last - first + 1;
	}
    return last - first + 1;
}
