#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int N;
  cin >> N;
  int a[N+1];
  a[0] = INT_MIN;
  for(int i=1; i<N+1; ++i){
    cin >> a[i];
  }

  int L[N+1] = {};

  for(int i=1; i<N+1; ++i){
    for(int j=0; j<i; ++j){
      if(a[i]>a[j] && L[j]+1>L[i]){
        /* cout << a[i] << " > " << a[j] << endl; */
        L[i] = L[j]+1;
      }
    }
  }

  /* for(int i=1; i<N+1; ++i){ */
  /*   cout << L[i] << endl; */
  /* } */

  /* cout << L[N] << endl; */

  cout << *max_element(L+1, L+N+1) << endl;
  
 
  return 0;
}
