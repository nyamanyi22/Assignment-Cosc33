#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to calculate Fibonacci (recursive)
long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter a number to calculate Fibonacci: ";
    cin >> num;

    auto start = high_resolution_clock::now();
    long long fib = fibonacci(num);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Fibonacci(" << num << ") is: " << fib << endl;
    cout << "Time taken: " << duration.count() << " microseconds\n";

    return 0;
}
