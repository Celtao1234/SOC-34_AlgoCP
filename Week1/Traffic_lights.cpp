#include <iostream>
#include <set>

using namespace std;

int main() {


    int x, n;
    cin >> x >> n;

    set<int> positions;
    positions.insert(0);
    positions.insert(x);

  
    multiset<int> lengths;
    lengths.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

      
        auto it = positions.lower_bound(p);
        int next_light = *it;
        int prev_light = *prev(it);


        lengths.erase(lengths.find(next_light - prev_light));


        lengths.insert(p - prev_light);
        lengths.insert(next_light - p);


        positions.insert(p);

        cout << *lengths.rbegin() << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}

