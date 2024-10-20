#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of stock prices: ";
    cin >> n;

    int stockPrices[n];
    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> stockPrices[i];
    }

    stack<int> s;  // Stack to hold indices of the stock prices
    int nge[n];    // Array to store the Next Greater Elements

    // Initialize the NGE array with -1
    for (int i = 0; i < n; i++) {
        nge[i] = -1;
    }

    // Iterate over the stock prices
    for (int i = 0; i < n; i++) {
        // While the stack is not empty and the current price is greater
        // than the price at the index stored at the top of the stack
        while (!s.empty() && stockPrices[s.top()] < stockPrices[i]) {
            nge[s.top()] = stockPrices[i]; // Set NGE for the index popped
            s.pop(); // Pop the index from the stack
        }
        s.push(i); // Push the current index onto the stack
    }

    // Output the stock prices with their NGE
    for (int i = 0; i < n; i++) {
        cout << stockPrices[i] << " " << nge[i] << endl;
    }

    return 0;
}
