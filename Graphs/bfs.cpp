#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

class graph{
    int v;
    vector<list<int>>l;
  
public:
graph(int v){
    this->v=v;
   l.resize(v);
}

void addedge(int u, int v){
 l[u].push_back(v);
  l[v].push_back(u);
}


void print(){
for(int i=0; i<v; i++){
    cout<<i<<" :";
    for(int n:l[i])
      cout<<n<<" ";
    cout<<endl;
}
}

void bfs(){
    queue<int> q;
    vector<bool> vis(v,false);
    q.push(0);
    int u; 
   while(q.size()>0){
     u=q.front();
    q.pop();

    cout<<u<<" ";
    for(int n: l[u])
    {
       if(!vis[n]) 
        {vis[n]=true;
        q.push(n);}
   } 
}
  cout <<endl;}
};

int main(){
    graph g(5);
    g.addedge(0,1);
     g.addedge(1,2);
      g.addedge(1,3);
       g.addedge(2,4);
        g.print();
        g.bfs();
        return 0;
}
