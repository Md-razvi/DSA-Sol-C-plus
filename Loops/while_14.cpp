#include <iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter the num"<<endl;
    cin>>num;
    while(i<=num)
    {
        int j=1,k=1;
        while(j<=i)
        {
            cout<<"  ";
            j++;
        }
        while(k<=(num-i+1))
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;

        i++;
    }
}