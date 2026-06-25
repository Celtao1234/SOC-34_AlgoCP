#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

   
    vector<int> towers;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;


        auto it = upper_bound(towers.begin(), towers.end(), k);

        if (it == towers.end()) {
         
            towers.push_back(k);
        } else {
            
            *it = k;
        }
    }

    
    cout << towers.size() << "\n";

    return 0;
}
