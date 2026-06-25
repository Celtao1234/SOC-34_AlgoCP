#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        movies[i] = {b, a}; // (end, start)
    }

    sort(movies.begin(), movies.end());

    multiset<int> freeTimes;
    for (int i = 0; i < k; i++) freeTimes.insert(0);

    int ans = 0;

    for (auto [end, start] : movies) {
        auto it = freeTimes.upper_bound(start);

        if (it == freeTimes.begin()) continue;

        --it; // latest free time <= start
        freeTimes.erase(it);
        freeTimes.insert(end);
        ans++;
    }

    cout << ans << "\n";
    return 0;
}