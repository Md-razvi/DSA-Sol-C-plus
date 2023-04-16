#include <iostream>
using namespace std;
int main(){
    int a,i=0;
    cout<<"Enter the number from zero to nine"<< endl;
    cin>>a;
    int k=1;
    while(i<a)
    {
        int j=1;
        while(j<=a)
        {
            cout <<k<<" ";
            k++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}