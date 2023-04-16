#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    char a;
    cin >>a;
  if (a>=48 && a<=57)
  {
      cout<< a <<" belongs to numeric values "<<endl;
  }
  else if (a>=65 && a<=90)
  {
      cout<< a <<" belongs to UpperCase " <<endl;
  }
  else if(a>=97 && a<=122)
  {
      cout<<a<<" belongs to LowerCase "  <<endl;
  }
}