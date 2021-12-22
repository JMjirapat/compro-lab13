#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int num){
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return fibonacci(num-1)+fibonacci(num-2);
}
