#include <iostream>
using namespace std;
int main(){
int num,i=0;
cout<<"Enter a number"<< endl;
cin>>num;
while(i<num)
{
    int j=0;
    while(j<=i)
    {
        cout<<"* ";
        j++;
    }
    cout<<" "<<endl;
    i++;
}


}
