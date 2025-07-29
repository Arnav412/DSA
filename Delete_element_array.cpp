
#include <iostream>
using namespace std;

int main(){
  int size = 5;
  int arr[100] = {1,2,3,4,5};
  int pos = 2;
  for( int i = pos ; i < size-1 ; i ++){
    arr[i] = arr[i+1];
  }
  
  size --;
  for( int i = 0 ; i < size ; i ++){
    cout << arr[i] << " ";
  }
  
}


