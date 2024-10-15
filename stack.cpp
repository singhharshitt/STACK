

#include <iostream>
using namespace std;
#define size 20

int top = -1;  // Initialize top
int arr[size]; // Stack array

void push(int element) {
    if (top == size - 1) {
        cout << "Stack Overflow" << endl;  // Stack is full
    } else {
        top++;           // Increment top index
        arr[top] = element;  // Store element at new top
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;  // Stack is empty
    } else {
        cout << "Popped element: " << arr[top] << endl;
        top--;          // Decrement top to remove the element
    }
}

void Top() {
    if (top == -1) {
        cout << "The Stack is empty" << endl;
    } else {
        cout << "Top element: " << arr[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "The Stack is empty" << endl;
    } else {
        cout << "Stack elements:" << endl;
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, element;
    cout << "\nPress 1 to push an element into the stack" << endl;
        cout << "Press 2 to pop out an element from the stack" << endl;
        cout << "Press 3 to check the top element of the stack" << endl;
        cout << "Press 4 to display the stack" << endl;
        cout << "Press 0 to exit" << endl;
    
    // Loop for multiple operations
    while (true) {
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to push: ";
                cin >> element;
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                Top();
                break;
            case 4:
                display();
                break;
            case 0:
                exit(0);  // Exit the program
                break;
            default:
                cout << "Enter a valid choice" << endl;
                break;
        }
    }
    return 0;
}
