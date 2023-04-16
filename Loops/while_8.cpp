#include <iostream>
using namespace std;
int main (){
    int num,i=0,j=1;
    cout<<"Enter a number"<< endl;
    cin>>num;
    while(i<num)
    {
        int k=0;
        while(k<=i){
            cout<<j<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;

    }


}