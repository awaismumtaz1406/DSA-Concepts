#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
class node{
    public:
int data;
node* le;
node * rig;

node(int v){
    data=v;
    le=rig=nullptr;
}
};


node * buildtree(vector<int> v){
    static int i=-1;
      i++;
    if(v[i]==-1)
        return NULL;
    node * root=new node(v[i]);
    root->le=buildtree(v);
    root->rig=buildtree(v);
    return root;
}

void preorder(node* root){
    if(root==nullptr)
     return ;

cout<<root->data<<endl;
  preorder(root->le);
  preorder(root->rig);
}

void inorder(node* root){
    if(root==nullptr)
     return ;
 
  inorder(root->le);
  cout<<root->data<<endl;
  inorder(root->rig);
}

void postorder(node* root){
    if(root==nullptr)
     return ;
 
  postorder(root->le);
  postorder(root->rig);
  cout<<root->data<<endl;
}


void check(node* root){
  int c=0;
    if(root==nullptr)
    {c++;
   cout<<root->data<<endl;
     return ;}
 
 check(root->le);
 check(root->rig);
}

void levelorder(node * root)
{
queue<node*> q;
q.push(root);
while (q.size()>0)
{
    node * c=q.front();
    q.pop();
    cout<<c->data<<" "; 
    if(c->le!=nullptr )
    q.push(c->le);
    if(c->rig!=nullptr )
    q.push(c->rig);
  }
}

void levelorderforline(node * root)
{
queue<node*> q;
q.push(root);
q.push(nullptr);
while (q.size()>0){
    node * c=q.front();
    q.pop();
    if(c==nullptr){
        if(!q.empty())
      {
        cout<<endl;
        q.push(nullptr);
        continue;
      }
      else{
        break; }
    }
    cout<<c->data<<" ";
    if(c->le!=nullptr )
    q.push(c->le);
    if(c->rig!=nullptr )
    q.push(c->rig);
}
}

int height(node *root){
       if(root==nullptr)
        return 0;
       int lh=height(root->le);
       int  rh=height(root->rig);
        return max(lh,rh)+1;
   }

int count(node *root){
       if(root==nullptr)
        return 0;
       int  lh=count(root->le);
       int rh=count(root->rig);
        return (lh+rh)+1;
   }

    int sum(node *root){
       if(root==nullptr)
        return 0;
       int  ls=sum(root->le);
       int rs=sum(root->rig);
        return (ls+rs)+root->data;
   }

   int diameter(node *root){
    if(root==nullptr)
      return 0;

     int  ld=diameter(root->le);
     int  rd=diameter(root->rig);
   
     int c=height(root->le)+ height(root->rig);

     return max(max(ld, rd), c);

   }

  
   void kth(node *root,int  a){
    if(root==nullptr)
    return;
    if(a==1)
    cout<<root->data;
    
    kth(root->le,a-1);
    kth(root->rig,a-1);

    
   }



int main(){
vector<int> v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
node* root=buildtree(v);
// cout<<root->data<<endl;
// cout<<root->le->data<<endl;;
// cout<<root->rig->data;
// preorder(root);
// postorder(root);
// int a=height(root);
// cout<<"height of tree is :"<<a<<endl;
// levelorderforline(root);
// int a=count(root);
// cout<<"count of tree is :"<<a<<endl;
// int a=sum(root);
// cout<<"sum of tree is :"<<a<<endl;
// int a=diameter(root);
// cout<<"diameter of tree is :"<<a<<endl;
kth(root,3);
    return 0;
}