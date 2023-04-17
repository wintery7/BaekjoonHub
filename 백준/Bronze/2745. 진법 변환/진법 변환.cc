#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  string N;
  int b;

  cin >> N >> b;
  if(b<2 || b > 36)
    return -1;

  int N_len = N.length(), sum = 0;


  for (int i = 0; i < N_len; i++){
    int num = N[i];
    
    if(num<65){
      num-= 48;
    }
      
    else if(num>9){
    num -= 55;
    }
    
    sum += num*pow(b,N_len-i-1);
  }

  cout << sum <<endl;
  
}