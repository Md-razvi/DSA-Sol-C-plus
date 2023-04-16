#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"Enter the value that is between 0 to 9 "<<"\n";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout <<endl;
        i=i+1;
    }

    return 0;
}