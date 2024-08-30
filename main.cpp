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

int main(){
  int n=0;
  cout<<"Enter a number please."<<endl;
  cin>>n;
  cout<<summation(n);
}

int summation(int n){
  int total=0;
  for(int i=1;i<=n; i++){
    total+=i;
  }

  return total;
}
