#include <bits/stdc++.h>
using namespace std;

// Notes:
// 1-> 1 + 2 + 3 +... + n = n(n + 1) / 2
// 2-> Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

void print1d(vector<int>arr){
    for(auto i : arr) cout << i << " ";
}

long long seriesSum(int n)
{
    // code here
    if (n == 1)
        return 1;
    return ((long)n * (long)(n + 1) / 2);
}

vector<int> valueEqualToIndex(int arr[], int n)
{
    // code here
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
            res.push_back(i + 1);
    }
    return res;
}

int main()
{
    cout << seriesSum(5) << endl;
    int arr[] = {15, 2, 34, 56, 76};
    cout << print1d(valueEqualToIndex(arr, 5));
}