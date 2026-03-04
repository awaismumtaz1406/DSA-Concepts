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

class doubly
{
public:
	node *h;
	node *t;

public:
	doubly()
	{
		h = t = nullptr;
	}

	void insert(int d)
	{
		node *nn = new node(d);
		if (h == nullptr)
		{
			h = t = nn;
		}
		else
		{
			t->n = nn;
			nn->pr = t;
			t = nn;
		}
	}

	void reverse()
	{
		node *c = h;
		node *te=nullptr;
		while (c != nullptr)
			{ 
		te = c->pr;
		c->pr = c->n;
		c->n = te;
		c = c->pr;
	       }
		
	}

	void print()
	{
		node *te = h;
		while (te != nullptr)
		{
			cout << te->d<<" ->";
			te=te->n;
		}
	}
};

int main()
{

	doubly l;
	int  d;
	int arr[10]={11,22,33,44,55,66,77,88,99,100};
	int s=sizeof(arr)/sizeof arr[0];
	
	for (int i = 0; i <s; i++)
	{  d=arr[i];
		l.insert(d);
	}
		l.print();
	
	
		cout<<" after revserse applied:";
	l.reverse();
		l.print();

	
}
