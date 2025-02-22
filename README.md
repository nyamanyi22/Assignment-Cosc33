# Factorial and Fibonacci Sequence Calculator
#Elizabeth Omari
 #EB3/61532/22
## Description
This project contains two programs:
1. A program to calculate the **factorial** of a given number.
2. A program to compute the **Fibonacci sequence** for a given number.

Each program also calculates the **runtime** of the respective calculations.

## Technologies Used
- C++ 
- `chrono` library for measuring execution time
-VsCode
## Example usage
**Factorial**
Detailed Explanation: Function factorial(int n): This is a recursive function that calculates the factorial of n. It calls itself with n - 1 until n == 0, where it returns 1 (base case). Base Case: If n == 0, the factorial is defined as 1. Recursive Case: Otherwise, it computes n * factorial(n - 1).

Enter a number to calculate factorial: 13
Factorial of 13 is: 6227020800
Time taken: 0 microseconds

Enter a number to calculate factorial: 5
Factorial of 5 is: 120
Time taken (high_resolution_clock): 0 microseconds
PS C:\Users\Levi\Desktop\systemDesign> 

**Fibonacci sequence**
Detailed Explanation: Function fibonacci(int n): This function calculates the nth Fibonacci number recursively. The base cases are fibonacci(0) = 0 and fibonacci(1) = 1. For any n > 1, it computes fibonacci(n - 1) + fibonacci(n - 2).
Function fibonacciSeries(int n): This function prints the Fibonacci series up to the nth term. It uses a loop to call the fibonacci(i) function for each index i from 0 to n-1.

Enter a number to calculate Fibonacci: 13
Fibonacci(13) is: 233
Time taken: 3 microseconds

Enter a number to calculate Fibonacci: 39
Fibonacci(39) is: 63245986
Time taken: 443373 microseconds
## How to Run
1. Clone this repository:
   ```sh
   git clone https://github.com/nyamanyi22/Assignment-Cosc33.git
2. Open the project in VS Code.
Update the task.json file in VS Code if necessary:
Go to .vscode/task.json
Modify the file to configure your build tasks properly.
Compile and run the program
