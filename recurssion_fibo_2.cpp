#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
                    

    int result = fibonacci(n - 1) + fibonacci(n - 2);
    return result;
}

int main()
{

    int n;
    cin >> n;

    if (n < 0)
    {
        cout << " put a valid number" << endl;
    }
    cout<<"Fibonacci series upto "<<n<<"th term is: "<<endl;
    for(int i = 0;i<n;i++) {
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    cout << n << "th term of a fibonacci series is " << fibonacci(n-1) << endl;
    return 0;
}