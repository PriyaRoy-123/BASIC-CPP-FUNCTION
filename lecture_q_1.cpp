#include<iostream>
using namespace std;

int nterm(int n){
    int ans;
    ans = (3*n+7);
    return ans;

}
 int main(){

    int n;
    cin>>n;
    
    cout<<  "term of an AP is"<<" "<<nterm(n)<< endl;

 }