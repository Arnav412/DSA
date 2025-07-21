#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int x,y;
  cin >> x >> y;
  int num[x][y];
    for (int i = 0 ; i < x ; i++ ){
      for (int j = 0 ; j < y ; j++){
        cin >> num[i][j];
      }
    };
    for (int i = 0 ; i < x ; i++ ){
      for (int j = 0 ; j < y ; j++){
        cout << num[i][j] << " ";
      }
      cout << endl;
    };
    
    
}