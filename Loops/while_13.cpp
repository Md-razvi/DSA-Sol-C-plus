#include<iostream>
using namespace std;
int main(){
    int num,row=1;
    cout<<"Enter a given number "<<endl;
    cin>>num;
    while(row<=num)
    {
        int j=1;
        while(j<=row)
        {
            char a='A'+num-row+j-1;
            cout <<a<<" ";
            j++;
        }
        cout<< endl;
        row++;
    }
    

}