#include <iostream>
#include <vector>
using gg = long long;
using namespace std;

int cnt_inv(vector<gg> &arr, gg left, gg mid, gg right)
{
    gg n1 = mid - left + 1;
    gg n2 = right - mid;
    vector<gg> l(n1);
    vector<gg> r(n2);
    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        r[i] = arr[mid + 1 + i];
    }
    gg cnt = 0;
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (l[i] >= r[j])
        {
            cnt++;
        }
    }
    return cnt;
}

int run(vector<gg> &arr, gg left, gg right)
{
    if (left >= right)
    {
        return 0;
    }
    gg ans = 0;
    gg mid = left + (right - left) / 2;
    run(arr, left, mid);
    run(arr, mid + 1, right);
    ans += cnt_inv(arr, left, mid, right);
    return ans;
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        vector<gg> arr;
        for (int i = 0; i < b; i++)
        {
            gg x;
            cin >> x;
            arr.push_back(x);
        }
        cout << run(arr, 0, b-1) << endl;
    }
}