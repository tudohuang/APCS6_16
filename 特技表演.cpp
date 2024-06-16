#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> buildings(n);
    int temp;
    vector<int>trace(n);
    for(int i=0; i<n; i++){
        cin>> buildings[i];
    }
    for(int i=0; i<n; i++){
        temp = buildings[i];
        for(int j=i; j<n; j++){
            if(temp>=buildings[j]){
                temp = buildings[j];
                trace[i] += 1;
            }
            else{
                break;
            }
        }
}
sort(trace.begin(), trace.end());
cout<<trace[n-1];
}
