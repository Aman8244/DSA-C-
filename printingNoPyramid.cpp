// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}