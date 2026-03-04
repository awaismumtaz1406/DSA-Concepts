#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int fr;
    int rr;
    int size;
    int c=0;

public:
    queue(int s)
    {
        this->size = s;
        arr = new int[size];
        fr = rr = -1;
    }

    bool isfull()
    {
        return c==size;
    }

    bool isempty()
    {
        return c==0;
    }

    void insert(int v)
    {
        if (isfull())
        {
            cout << "quque full";
        }
        else
        {
            rr = (rr + 1) % size;
            arr[rr] = v;
        c++;}
    }

    void delet()
    {
        if (isempty())
            cout << "nothing to delete";
        else
        {
            fr = (fr + 1) % size;
            int n = arr[fr];
            c--;
        }
    }

    void print()
    {
        for(int i=0; i<c; i++){
            cout<<arr[i];
        }
    }
};

int main(){
    queue q1(10);
    q1.insert(23);
     q1.insert(33);
    q1.insert(44);
     q1.insert(55);
     
q1.print();
}