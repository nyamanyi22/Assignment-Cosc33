#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    auto start = high_resolution_clock::now(); // Start time
    long long fact = factorial(num);
    auto stop = high_resolution_clock::now();  // Stop time

    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration

    cout << "Factorial of " << num << " is: " << fact << endl;
    cout << "Time taken : " << duration.count() << " microseconds\n";

    return 0;
}
