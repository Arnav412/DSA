#include <iostream>
using namespace std;

int main(){
  int size = 4;
  int arr[100] = {1,2,4,5};
  int pos = 2;
  int val = 3;
  for( int i = size ; i > pos ; i --){
    arr[i] = arr[i-1];
  }
  arr[pos] = val;
  size ++;
  for( int i = 0 ; i < size ; i ++){
    cout << arr[i] << " ";
  }
  
}

