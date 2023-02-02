//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
using namespace std;

int main() {
  int fib = 0;
  int num_1 = 0;
  int num_2=1;
  int sum=0;

  while(fib<=4000000){
    fib=num_1+num_2;
    num_1=num_2;
    num_2=fib;

    if(fib%2==0){
    sum=fib+sum;
    };
  }
  
  cout<<sum<<endl;
  
  return 0;
  }
