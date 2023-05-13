bool ispossible(vector<int> &boards, int k, int mid)
{

    int n = boards.size();

    int count = 1;

    int sum = 0;

    for (int i = 0; i < n; i++)

    {

        if (sum + boards[i] <= mid)

        {

            sum += boards[i];
        }

        else

        {

            count++;

            if (count > k || boards[i] > mid)

            {

                return false;
            }

            sum = boards[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)

{

    int n = boards.size();

    int s = 0;

    int ans = -1;
    int sum = 0;

    for (int i = 0; i < n; i++)

    {

        // s=min(s,boards[i]);

        sum += boards[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;

    while (s <= e)

    {

        if (ispossible(boards, k, mid))

        {

            ans = mid;

            e = mid - 1;
        }

        else
        {

            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}