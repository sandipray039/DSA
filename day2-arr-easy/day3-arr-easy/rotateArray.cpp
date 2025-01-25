// rotating the array rightwise

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums, int s, int e)
{
    while (s < e)
    {

        swap(nums[s], nums[e]);
        s++;
        e--;
    }
}

int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v, 0, n - 1);
    reverse(v, 0, k - 1);
    reverse(v, k, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}