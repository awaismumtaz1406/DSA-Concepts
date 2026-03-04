#include <iostream>
using namespace std;

class node
{
public:
    int regno;
    string name;
    string dpt;
    node *n;
    node *p;

public:
    node(int r, string name, string d)
    {
        regno = r;
        dpt = d;
        this->name = name;
        n = p = nullptr;
    }
};

class cll
{
public:
    node *h;
    node *t;

public:
    cll()
    {
        h = t = nullptr;
    }

    void insert(int regno, string name, string dpt)
    {
        node *nn = new node(regno, name, dpt);
        if (h == nullptr)
        {
            h = t = nn;
            t->n = h;
        }
        else
        {
            nn->n = h;
            h->p = nn;
            h = nn;
            t->n = h;
        }
    }

    void insertend(int regno, string name, string dpt)
    {
        node *nn = new node(regno, name, dpt);
        if (h == nullptr)
        {
            h = t = nn;
            t->n = h;
        }
        else
        {
            t->n = nn;
            nn->p = t;
            t = nn;
            t->n = h;
        }
    }

   void print()
	{
		node *te = h;
		do
		{
			 cout << "Name: " << te->name << " Roll: " << te->regno << " dept: " << te->dpt << endl;
            te = te->n;
		} while (te != h);
	}
};

int main()
{
    cll l1;
    l1.insert(1, "ahmad", "AI");
    l1.insertend(2, "aawais", "CE");
    l1.insertend(3, "arslan", "DS");
    l1.insertend(4, "rizwan", "ca");
    // l1.insertspecific(5, "malik", "adhh", 3);
    // l1.delspec(3);
    l1.print();
}