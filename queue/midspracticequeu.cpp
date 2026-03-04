#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int fr;
    int rr;
    int size;

public:
    queue(int s)
    {
        this->size = s;
        arr = new int[size];
        fr = rr = -1;
    }

    bool isfull()
    {
        return rr == size - 1;
    }

    bool isempty()
    {
        return fr == -1;
    }

    void insert(int v)
    {
        if (isfull())
        {
            cout << "quque full";
        }
        else
        {
            if (isempty())
            fr = rr = 0;
            else 
            ++rr;
        arr[rr] = v;}
            
        }

        int delet(int v)
        {
            if (isempty())
                cout << "nothing to delete";
            else
            {
                int v = arr[fr];
                  fr++;
                if (fr > rr)
                    fr = rr = -1;
                return v;
            }
        }

        int peek()
        {
            return arr[fr];
        }

        void print()
        {
           
                for(int i=fr; i<=rr; i++)
                cout<<arr[i];
            
        }
    };

    int main()
    {
        queue q1(13);
        q1.insert(23);
        q1.insert(11);
        q1.insert(23);
        q1.insert(11);

        q1.print();
    }