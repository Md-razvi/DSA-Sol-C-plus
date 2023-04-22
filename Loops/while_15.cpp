#include <iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter a number "<<endl;
    cin>>num;
    while(i<=num)
    {
        int j=1,k=1,c=1;
        while(j<=num-i)
            {
                cout<<"  ";
                j++;
            }
        while(k<=i)
            {
                cout <<k<<" ";
                k++;
            }
        while(c < i )
            {
                cout <<(i-c+1)-1<<" ";
                c++;
            }
            cout<<endl;
            i++;
        

    }

}