#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int a ,b ;
  while(cin >> a >> b){

    if ( a== 0 & b ==0 ) break;
    if(a> 10000 || b>10000)
    return -1;

  if(a == b)
    return -1;

  if(b%a == 0)
    cout << "factor" << endl;
  else if(a%b ==0)
    cout << "multiple" << endl;
  else 
    cout << "neither" << endl;
  
  }

  return 0;

  
  


  
}