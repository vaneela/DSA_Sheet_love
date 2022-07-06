class solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here 
        unordered_map<int, int> m;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            auto it = m.find(k - arr[i]);
            if (it != m.end())
            {
                cnt += m[k - arr[i]];

            }
            m[arr[i]]++;
        }
        return cnt;
    }
};