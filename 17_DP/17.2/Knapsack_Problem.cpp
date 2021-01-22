#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main(){
  int N, W;
  cin >> N >> W;
  vector<P> vw(N);
  for(int i=0; i<N; ++i){
    cin >> vw[i].first >> vw[i].second;
  }

  int dp[N+1][W+1]={};
  for(int i=1; i<N+1; ++i){
    for(int j=1; j<W+1; ++j){
      if(vw[i-1].second <= j){
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-vw[i-1].second]+vw[i-1].first);
      }else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  
  for(int i=1; i<N+1; ++i){
    for(int j=1; j<W+1; ++j){
      cout << dp[i][j] ;
    }
    cout << endl;
  }
  


  return 0;
}
