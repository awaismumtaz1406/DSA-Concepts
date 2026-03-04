#include <iostream>
using namespace std;

class twoStacks {
public:
    int *arr;
    int t1, t2;
    int n;

    // Constructor
    twoStacks(int n) {
        this->n = n;
        arr = new int[n];
        t1=-1;
        t2=n;  // second stack starts from end
    }

    // Push into Stack 1
    void push1(int x) {
        if(t1<t2)
            arr[++t1]=x;
        else
            cout << "Stack Overflow in Stack1\n";
            }

    // Push into Stack 2
    void push2(int x) {
        if(t2>t1)
          arr[--t2]=x;
        else
            cout << "Stack Overflow in Stack2\n";
          
        }
      
    // Pop from Stack 1
    int pop1() {
        if(t1<t2)
        return arr[t1--];
        else
            return -1;
        }

    // Pop from Stack 2
    int pop2() {
     if(t2>t1)
    return arr[t2++];
    else
    return -1;
    }
};

int main() {
    twoStacks ts(10);

    ts.push1(10);
    ts.push1(20);
    ts.push1(30);
    ts.push1(40);
    ts.push2(50);
    ts.push2(60);
    ts.push2(70);
    ts.push2(80);

    cout << "Pop from stack1: " << ts.pop1() << endl; // 20
    cout << "Pop from stack2: " << ts.pop2() << endl; // 40

    return 0;
}
