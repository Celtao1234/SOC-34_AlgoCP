#include <iostream>
#include <vector>
#include <limits> // Required header
using namespace std;
int main()
{   int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long best = -10000000000LL; 
    long long max_sum_k = -10000000000LL;
    for(int i=0; i<n ; i++){
        max_sum_k = max(arr[i]+max_sum_k , arr[i]);
        best = max(best, max_sum_k);

    }
    cout<<best<<endl;

    return 0;
}