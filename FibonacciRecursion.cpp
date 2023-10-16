#include<iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

void printFibonacci(int n) {
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; ++i) {
        cout << fib(i) << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;
    printFibonacci(n);

    return 0;
}
