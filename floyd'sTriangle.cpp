// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,j;
    cin>>n;
    int no=1;
    for(int i=1;i<=n;i++){
        j=1;
        while(j<=i){
            cout<<no;
            cout<<" ";
            j++;
            no++;
        }
        cout<<endl;
    }
    return 0;
}