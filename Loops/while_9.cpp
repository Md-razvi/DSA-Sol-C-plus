#include <iostream>
using namespace std;
int main(){
    int num,i=1;
    cout << "Enter a number"<<endl;
    cin>>num;
    while(i<=num)
    {
        int k=0;
        while(k<i)
        {
            cout<<i+k<<" ";
            k++; 
        }
        cout<<endl;
        i++; 
    }
    
    
}