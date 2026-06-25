#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{   
   
    int n, m;
    long long k; 
    cin >> n >> m >> k;

    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int s = 0;
    int i = 0; 
    int j = 0; 

    while((i < n) && (j < m)){ 
        if(std::abs(a[i] - b[j]) <= k){
            s++;
            i++;
            j++;
        }
        // Case 1: Apartment is too small for applicant 'i'
        else if (b[j] < a[i] - k) {
            j++; 
        }
        // Case 2: Apartment is too big for applicant 'i'
        else {
            i++; 
        }
    }

    cout << s << "\n";
    return 0;
}