#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fact = 1;
        for (int i = 2; i <= n; ++i) {
            fact = fact* i;
        }
        return fact;
    }
}

int main() {
    int num = 100; 
    int result = factorial(num);
    
    cout << "Factorial is " << result << endl;

    return 0;
}
