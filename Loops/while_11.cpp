#include <iostream>
using namespace std;
int main(){
  int num,row=1;
  cout<< "Enter a number "<< endl;
  cin>>num;
  int i=1;
  while(row<=num)
  {
    int col=1;
    while(col<=num)
    {
        char a='A'+row+col-2;
        cout<< a<<" ";
        col++;
    }
    cout<<endl;
    row++;
  }
}