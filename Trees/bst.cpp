#include <iostream>
using namespace std;

class bst {
public:
    int d;
    bst *le;
    bst *ri;

    bst(int val) {
        d = val;
        le = ri = nullptr;
    }
};

class Tree {
public:
    bst *root;

    Tree() {
        root = nullptr;
    }

    void insert(int v) {
        bst *nn = new bst(v);

        if (root == nullptr) {
            root = nn;
            return;
        }

        bst *p = root;
        bst *q = nullptr;

        while (p != nullptr) {
            q = p;
            if (v < p->d)
                p = p->le;
            else
                p = p->ri;
        }

        if (v < q->d)
            q->le = nn;
        else
            q->ri = nn;
    }

    void preorder(bst *node) {
        if (node == nullptr)
            return;

        cout << node->d << " ";
        preorder(node->le);
        preorder(node->ri);
    }

    void preorder() {
        cout << "Preorder Traversal: ";
        preorder(root);
        cout << endl;
    }

    node * helper(vector<int> &num, int st, int en)
    {
        int md=(st+e)/2;
        if(md==num[md])
       root= new node(md);
       root->le=helper(num,0,mid-1);
       root->rig=helper(num,mid+1,e);
       return root;
    }
    node * sortedbst(vector<int> &num)
    {int s=0;
        int e=sizeof(num)/sizeof num[0];
    return helper(nums);
    }
};

int main() {
    Tree t;

    vector<int> num=[3,5,10,12,9];
    sortedbst(v);
    t.insert(10);
    t.insert(5);
    t.insert(15);
    t.insert(3);
    t.insert(7);

  
    t.preorder();

    return 0;
}

//two classes recursive approach


// class Node {
// public:
//     int d;
//     Node* le;
//     Node* ri;
//     Node(int val) { d = val; le = ri = nullptr; }
// };

// class BST {
// private:
//     Node* root;
//     Node* insertRec(Node* node, int val) {
//         if(!node) return new Node(val);
//         if(val < node->d) node->le = insertRec(node->le, val);
//         else node->ri = insertRec(node->ri, val);
//         return node;
//     }

//     void inorderRec(Node* node) {
//         if(!node) return;
//         inorderRec(node->le);
//         cout << node->d << " ";
//         inorderRec(node->ri);
//     }

// public:
//     BST() { root = nullptr; }
//     void insert(int val) { root = insertRec(root, val); }
//     void printInorder() { inorderRec(root); }
// };

// int main() {
//     BST tree;
//     vector<int> v = {3, 2, 1, 5, 4};
//     for(int x : v) tree.insert(x);
//     tree.printInorder();
// }

