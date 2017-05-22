#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,ab,c = 1,d;
    cin >> n;
    d = n-1;
    for(int i = 0; i < n; i++){
     ab = d;
     for(int j = 0; j < ab; j++)cout << " ";
     for(int m = 0; m < c; m++)cout << "#";
     cout << endl;
     d--;
     c++;
    }
    return 0;
}