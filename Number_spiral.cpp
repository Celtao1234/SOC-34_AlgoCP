#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while(t--){
        long long n;
        long long m;
        cin>>m>>n;
        long long s;
        if(m>=n){
            
            if(m%2==0){
                s= (m*m - n +1);
                }
            else{
                s= (m*m -2*m +1 + n);
                }
            }
        else{

            if(n%2==0){
                s= (n*n -2*n +1 + m);
                }
            else{
                s= (n*n - m +1);
                }
        }
        cout<<s<<endl;
    }
    return 0;
}