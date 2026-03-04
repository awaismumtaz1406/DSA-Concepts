#include <iostream>
using namespace std;

class node
{
public:
    int d;
    node *n;
    node *pr;

    node(int d)
    {
        this->d = d;
        n = pr = nullptr;
    }
};
class circularqueue
{
public:
    node *fr;
    node *rr;

public:
    circularqueue()
    {
        fr = rr = nullptr;
    }

    void enque(int v)
    {
        node *nn = new node(v);
        if (fr == nullptr && rr == nullptr)
        {
            fr = rr = nn;
            rr->n = fr;
        }
        else
        {
            rr->n = nn;
            rr = nn;
            rr->n = fr;
        }
    }

    void deque()
    {
        if (fr == nullptr)
            cout << "nothing null in list";
            else if(fr==rr ){
         fr=rr=nullptr;
            }
        else
        {
            node * t= fr;
            while()
            fr=fr->n;
            rr->n=fr;
            delete t;
        }
    }
    void print()
    {
        node *t = fr;
        while (1)
        {
            cout << t->d<<" ";
            t = t->n;
            if (t == fr)
                break;
        }
    }
};

int main()
{
    circularqueue q1;
    q1.enque(23);
    q1.enque(33);
    q1.enque(43);
    q1.enque(53);
    q1.enque(63);
    //  q1.print();
    q1.deque();
    q1.print();
}
