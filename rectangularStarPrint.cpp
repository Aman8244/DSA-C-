// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int row,col;
    cout<<"enter rows and columns"<<endl;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}