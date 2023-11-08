#include <bits/stdc++.h>

using namespace std;

void solve(long long k, vector<int> a)
{
  int n = a.size();
  int mx = 0;
  long long sum = 0;
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    if (sum == k)
      mx = max(mx, i + 1);
  }
}

int main()
{

  return 0;
}