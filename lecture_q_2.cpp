#include<iostream>
using namespace std;


    int countsetbits(int n){

        int count=0;
        while(n){
            count+=n&1;
            n>>=1;
        }
        return count;

    }
    int  main(){

        int a,b;
        cin>> a>>b;
        int result=a&b;
        cout<< result<< endl;
        cout<<"total no of set bits in a&b is"<<" " <<countsetbits(result)<< endl;

    }

