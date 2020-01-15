#include <iostream>
using namespace std;
int main(){
  int x;
  
  for(int j=0; j<256; j++){
  	x = j;
    for(int k=2; k<10; k++){
      if(x%2==0)
      	cout << 0;
      else
      	cout << 1
      x = x/2;
    }
    cout << endl;
  }
}
