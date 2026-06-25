#include <iostream>
using namespace std;
#include <vector>
#include <set>
int main(){
    int n,m;
    cin>>n>>m;
    multiset<long long> price;
    vector<long long> max_price(m);
    vector<long long> ans;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        price.insert(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> max_price[i];
    }
    for(int j=0; j<m ;j++){
        auto it = price.upper_bound(max_price[j]);
        if(it==price.begin()){
            ans.push_back(-1);
        }
        else{
            it--;
            ans.push_back(*it);
            price.erase(it);
        }
    }
    for (long long i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}
