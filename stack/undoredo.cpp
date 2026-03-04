#include <iostream>
using namespace std;
#define SIZE 50

class Stack {
    string arr[SIZE];
    int top;
public:
    Stack() { top = -1; }

    void push(string val) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    string pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return "";
        }
        return arr[top--];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack undo, redo;
    string current = "";

    // 1️⃣ Type something
    current = "Hello";
    undo.push(current);   // save state
    cout << "Typed: " << current << endl;

    current = "Hello World";
    undo.push(current);   // save again
    cout << "Typed: " << current << endl;

    // 2️⃣ Undo
    redo.push(current);
    current = undo.pop();
    cout << "After Undo: " << current << endl;

    // 3️⃣ Redo
    undo.push(current);
    current = redo.pop();
    cout << "After Redo: " << current << endl;


    void reverse(){
        string ch="";
        for(int i=0; i<l; i++)
    }
    return 0;
}