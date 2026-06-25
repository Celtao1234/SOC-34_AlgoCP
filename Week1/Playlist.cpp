#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> songs(n);
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

  
    map<int, int> last_pos;
    
    int max_length = 0;
    int left = 0; 

    for (int right = 0; right < n; right++) {
       
        if (last_pos.count(songs[right])) {
           
            left = max(left, last_pos[songs[right]]);
        }

        max_length = max(max_length, right - left + 1);

     
        last_pos[songs[right]] = right + 1;
    }

    cout << max_length << "\n";

    return 0;
}
