// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,i=1;
    cout <<"Enter a given number for star matrix"<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"* ";
            j=j+1;
        }
        cout <<endl;
        i=i+1;
    }
  
    return 0;
}