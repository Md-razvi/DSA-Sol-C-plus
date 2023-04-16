#include <iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter a number to get a number pattern"<<endl;
    cin>>num;
    while(i<=num)
    {
        int j=0;
        while(j<i)
        {
            cout<<i<<" ";
            j++;
        }
        cout <<endl;
        i++;
    }
}