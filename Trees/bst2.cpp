#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node {
public:
    int d;
    node *le;
    node *ri;
    node(int val) {
        d = val;
        le = ri = nullptr;
    }
};

node *insert (node *root, int val)
{    
    node * n=new node(val);
     if(root==nullptr)
      return n; 

    if(val<root->d)
        root->le=insert(root->le,val);
     else
        root->ri=insert(root->ri,val);    
}

node *bu(vector <int> v){
   node * root=nullptr;
    for(int m:v){
     root=insert(root,m);
    }
    return root;
}


void inorder(node *root){
    if(root==nullptr)
     return ;
 
  inorder(root->le);
  cout<<root->d<<endl;
  inorder(root->ri);
}       

bool search(node * root,int a){
if(root==nullptr)
     return false;
     if(root->d==a)
     return true;
     else if(a<root->d)
       return search(root->le,a);
     else
       return  search(root->ri,a);  
       
}
int sum(node * root){
  int c=0, s=0;
 if(root==nullptr)
    return 0;
   
   int lh= sum(root->le);
   int rh= sum(root->ri);
return lh+rh+root->d;
}

node* maxim(node * root){
 if(root==nullptr)
     return nullptr;
     if(root->ri==nullptr)
       return root;
      return maxim(root->ri);
}

node* minm(node * root){
 if(root==nullptr)
     return nullptr;
     if(root->le==nullptr)
       return root;
        return maxim(root->le);
}

int countleaf(node * root){
  if(root==nullptr)
  return 0;
  if(root->le==nullptr  && root->ri==nullptr)
  return 1;

  int lh=countleaf(root->le);
  int rh=countleaf(root->ri);
return lh+rh;
}


int countinternal(node * root){
  if(root==nullptr)
  return 0;
  if(root->le!=nullptr  || root->ri!=nullptr)
  return 1;

  int lh=countinternal(root->le);
   int rh=countinternal(root->ri);
return lh+rh;
}

int maxdepth(node * root){
 if(root==nullptr)
    return 0;
   
   int lh= maxdepth(root->le);
   int rh= maxdepth(root->ri);
return  max(lh,rh) +1 ;
}

int mindepth(node * root){
 if(root==nullptr)
    return 0;
   
   int lh= mindepth(root->le);
   int rh= mindepth(root->ri);
return  min(lh,rh) +1 ;
}
node * getinordersu

node *del(node * root, int k){
if(root==nullptr)
    return 0;
   else if(k<root->d)
   root->le=del(root->le,k);
   else if(k>root->d)
  root->ri=del(root->ri,k);
else{
  if(root->le==nullptr){
node * t=root->ri;
delete root;
return t;}

else if(root->ri==nullptr){
node * t=root->le;
delete root;
return t;}

else{
  node * t=getinorderIs(root->rig);
  root->d=t->d;
  root->ri=del(root->ri, t->d);
}


}
}
int main(){
vector<int> v={3,2,1,5,6,4};
node* root=bu(v);
// inorder(root);
// node * m=minm(root);
cout<<"max"<<countleaf(root);
// cout<<"output:"<<search(root,2);
// cout<<"output: "<<search(root,4);
return 0;
}


//single class nonrecursive
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
//     int d;
//     Node* le;
//     Node* ri;
//     Node(int val) { d = val; le = ri = nullptr; }
// };

// Node* insert(Node* root, int val) {
//     Node* nn = new Node(val);
//     if(!root) return nn;

//     Node* p = root;
//     Node* q = nullptr;
//     while(p) {
//         q = p;
//         if(val < p->d) p = p->le;
//         else p = p->ri;
//     }
//     if(val < q->d) q->le = nn;
//     else q->ri = nn;
//     return root;
// }

// void inorder(Node* root) {
//     if(!root) return;
//     inorder(root->le);
//     cout << root->d << " ";
//     inorder(root->ri);
// }

// int main() {
//     vector<int> v = {3, 2, 1, 5, 4};
//     Node* root = nullptr;
//     for(int x : v) root = insert(root, x);
//     inorder(root);
// }
