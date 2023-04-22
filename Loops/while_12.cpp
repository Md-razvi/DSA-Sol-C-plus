#include <iostream>
using namespace std;
int main(){
    int num,i=1;
    cout <<"Enter a number "<<endl;
    cin>>num;
    while(i<=num){
        int j=1;
        while(j<=i)
        {
            char a='A'+i+j-2;
            cout<<a<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}
