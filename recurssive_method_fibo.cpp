 #include<iostream>
  using namespace std;


  int fibonacci(int n){
    if(n<=1)
        return n;

    
    
    int result=fibonacci(n-1)+fibonacci(n-2);
     return result;
  }
  

  
  int main(){

    int n;
    cin>>n;

    if(n<0){
        cout<<" put a valid number"<< endl;
            }

     cout << n<<"th term of a fibonacci series is"<<fibonacci(n)<< endl;

 return 0;
  }