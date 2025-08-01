#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> temp;
        temp.push_back(0);
        for (int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;
            temp.push_back(point);
        }
        temp.push_back(x);
        n = temp.size();
        long long maxDistance = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                maxDistance = max(maxDistance, 2 * (temp[i] - temp[i - 1]));
            else
                maxDistance = max(maxDistance, (temp[i] - temp[i - 1]));
        }
        cout << maxDistance << endl;
    }
    return 0;
}