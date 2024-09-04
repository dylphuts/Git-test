/**
 * @file main.cpp
 * @author Dylan Hutson
 * @date 2024-08-30
 * @brief a hello wolrd
 * 
 * A test of getting everything set up for this class
 */

#include <iostream>
using namespace std;

int summation(int n);
int multiply(int n);

int main(){
  int n=0;
  cout<<"Enter a number please."<<endl;
  cin>>n;
  cout<<"SUM:"<<summation(n)<<endl;
  cout<<"MULT:"<<multiply(n)<<endl;
}

int summation(int n){
  int total=0;
  for(int i=1;i<=n; i++){
    total+=i;
  }

  return total;
}

int multiply(int n){
  int total=1;
  for(int i=1;i<=n; i++){
    total*=i;
  }

  return total;
}
