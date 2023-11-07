#include <iostream>
#include <vector>

// Function to calculate Fibonacci number using iteration
int fibonacciIterative(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

// Function to calculate Fibonacci number using recursion
int fibonacciRecursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int choice, n;
    
    while (true) {
        std::cout << "Choose a method to calculate Fibonacci numbers:" << std::endl;
        std::cout << "1. Iterative" << std::endl;
        std::cout << "2. Recursive" << std::endl;
        std::cout << "0. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        if (choice == 0) {
            break;
        }
        
        std::cout << "Enter the value of n: ";
        std::cin >> n;

        if (choice == 1) {
            int result = fibonacciIterative(n);
            std::cout << "The " << n << "-th Fibonacci number is: " << result << std::endl;
        } else if (choice == 2) {
            int result = fibonacciRecursive(n);
            std::cout << "The " << n << "-th Fibonacci number is: " << result << std::endl;
        } else {
            std::cout << "Invalid choice. Please enter 1, 2, or 0." << std::endl;
        }
    }
    
    return 0;
}

