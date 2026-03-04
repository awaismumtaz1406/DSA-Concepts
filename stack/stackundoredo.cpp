#include <iostream>
#include <stack>
using namespace std;
   stack <int> s;


int main(){
   stack <int> s;
   s.push(13);
   s.push(23);
   s.push(33);
 
// cout<<s.size()<<endl;
// cout<<s.top()<<endl;
stack <int> s1;
s1.swap(s);
while(!s1.empty()){
  cout<<s1.top();
  s1.pop();
}

if(s.empty())
cout<<"s atack is empty:"<<s.size();
// cout<<s[3]<<endl;



}