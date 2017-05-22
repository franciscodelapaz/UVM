#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,j=0,z=0,h=0,l=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
        while (j<n){
        if (arr[j]>0){
            h++;
        }
        if (arr[j]<0){
            l++;
        }
        else if (arr[j]==0) {
            z++;
        }
        j++;
    }
    cout << (float)h/n << endl << (float)l/n << endl << (float)z/n;
    return 0;
}