#include <bits/stdc++.h>
using namespace std;

// Notes:
// 1-> 1 + 2 + 3 +... + n = n(n + 1) / 2

long long seriesSum(int n)
{
    // code here
    if (n == 1)
        return 1;
    return ((long)n * (long)(n + 1) / 2);
}

int main()
{
    cout << seriesSum(5) << endl;
}