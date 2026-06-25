#include <iostream>
#include <vector>
using namespace std;
int main()
{   int n;
    int x;
    cin>>n>>x;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=0;
    int cnt=0;
    int sum=0;
    int j=0;
    int i=0;
    while(j<=n){
        if(sum==x){
            cnt++;
            sum= sum+a[j]-a[i];
            i++;
            j++;
        }
        else if(sum<x){
            sum+=a[j];
            j++;
        }
        else{
            sum-=a[i];
            i++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}