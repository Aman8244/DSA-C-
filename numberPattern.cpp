// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,spaces;
    cin>>n;
    for(int i=1;i<=n;i++){
        spaces=n-i;
         for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        int count =1;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
       
        cout<<endl;
    }
    

    return 0;
}