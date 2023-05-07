
#include <vector>
using namespace std;

int firstOccur(vector<int> &arr, int n, int k)
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

int lastOccur(vector<int> &arr, int n, int k)
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

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccur(arr, n, k);
    p.second = lastOccur(arr, n, k);

    return p;
}