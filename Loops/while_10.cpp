#include<iostream>
using namespace std;
int main(){
    int a,i=1;
    cout <<"Enter a number to get a pattern"<<endl;
    cin>>a;
    while(i<=a)
    {
        int j=1;
        while(j<=i)
        {
            cout <<i-j+1<< " ";
            j++;
        }       
        cout<<endl;
        i++;
    }
}