#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{   int n;
    int m;
    long long k;
    cin>> n >>m >>k ;
    vector<long> a;
    vector<long> b;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int s=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int j=0;
    for(int i=0; i<n;i++){
        while(j<n){
            if((a[i]-b[j]<k)&&(b[j]-a[i]<k)){
                s++;
            }
            else{
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
    
    
}