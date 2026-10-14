#include <iostream>
#include <vector>
using namespace std;

void merge(vector<long long> &arr, long long left, long long mid, long long right)
{
    long long n1 = mid - left + 1;
    long long n2 = right - mid;
    vector<long long> l(n1);
    vector<long long> r(n2);
    for (long long i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }
    for (long long i = 0; i < n2; i++)
    {
        r[i] = arr[mid + i + 1];
    }
    long long i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[k++] = l[i++];
        }
        else
        {
            arr[k++] = r[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = l[i++];
    }
    while (j < n2)
    {
        arr[k++] = r[j++];
    }
}

void sep(vector<long long> &arr, long long left, long long right)
{
    if (left >= right)
    {
        return;
    }
    long long mid = left + (right - left) / 2;
    sep(arr, left, mid);
    sep(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    long long b;
    cin >> b;
    vector<long long> arr;
    for (long long i = 0; i < b; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    sep(arr, 0, b - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}