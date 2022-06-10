#include<bits/stdc++.h>
using namespace std;

int rec(int m,int n, int i, int j){
    int c = 0;
    if(i > m || j > n){
        return 0;
    }
    if( i == m && j == n){
        
        return 1;
    }
    c += rec(m, n, i+1, j);
    c += rec(m, n, i, j+1);
    return c;
}



int main(){
    int m, n;
    cin>>m>>n;
    
    cout<< rec(m-1, n-1, 0, 0);
}