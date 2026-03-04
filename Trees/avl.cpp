#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int d;
    node *le;
    node *ri;
    int ht;
    node(int val) {
        d = val;
        ht=0;
        le = ri = nullptr;
    }
};

int height(node *root){
    if(root==nullptr)
     return 0;
     int lh=height(root->le);
    int rh=height(root->le);
     return lh+rh;
}

int balanced(node *root){
    if(root==nullptr)
     return 0;
     int lh=height(root->le);
    int rh=height(root->le);
     return lh-rh;
}

node * rr(node *root){
    node* y=root->le;
    root->rig=


}
int main(){
    node * root=nullptr;
//    int a= height(root);
//    cout<<"h: "<<a;
 int a= balanced(root);
   cout<<"balanced f : "<<a;
    return 0;
}