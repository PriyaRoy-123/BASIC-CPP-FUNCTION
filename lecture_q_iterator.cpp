#include<iostream>
using namespace std;


int fibo(int n){
    if(n<=1)
      return n;


      int prev=0, current=1,next;
    
    for(int i=3;i<=n;i++){
        next=prev+current;
          
        prev=current;
        current=next;
       

        }
        return current;
   
    


}

int main(){

    int n;
    cin>>n;

    if(n<0){
        cout<<"put a valid input"<< endl;
    }
    else{
        int result= fibo(n);

    
    cout<<"The "<<n<< "th  term of fibonacci series is"<< result<< endl;

    }
   
    return 0;

}