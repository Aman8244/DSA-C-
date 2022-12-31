// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int position,col=n;
    for(int i=1;i<=n;i++){
        position=1;
        for(int j=1;j<=col;j++){
            cout<<position<<" ";
            position++;
        }
        col--;
        cout<<endl;
    }

    return 0;
}