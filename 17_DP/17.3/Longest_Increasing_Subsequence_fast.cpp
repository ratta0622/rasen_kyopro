#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int N;
  cin >> N;
  int a[N];
  for(int i=0; i<N; ++i){
    cin >> a[i];
  }

  int L[N] = {};
  L[0] = a[0];
  int length = 1;

  for(int i=1; i<N; ++i){
    if(a[i] > L[length-1]){
      L[length] = a[i];
      ++length;
    }else{
      *lower_bound(L, L+length, a[i]) = a[i];
    }
  }

  /* cout << L[N] << endl; */

  cout << endl << length << endl;
  
 
  return 0;
}
