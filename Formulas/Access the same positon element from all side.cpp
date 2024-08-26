#include<bits/stdc++.h>

using namespace std;
#define ll long long

void accessFromAllSide(vector<vector<ll>>&arr){
    // One based index array
    // Row = Layers;
    // Column = i;

    ll n = arr.size()-1;
    ll span = n-2;
    for (ll layer = 1; layer <= n / 2; layer++, span-=2){
        for (ll i = 0; i <= max(1LL*0,span); i++){
            cout << arr[layer][layer+i]<< " ";
            cout << arr[layer][n-layer+1]<< " ";
            cout << arr[n-layer+1][n-layer-i+1]<< " ";
            cout << arr[n-layer+1][layer]<< " ";
             cout << endl;
        }
    }
}

int main(){
    vector<vector<ll>>arr = {{0,0,0,0,0,0},
                             {0,1,2,3,4,0},
                             {0,5,6,7,8,0},
                             {0,9,10,11,12,0},
                             {0,13,14,15,16,0},
                             {0,0,0,0,0,0}};
    accessFromAllSide(arr);
}