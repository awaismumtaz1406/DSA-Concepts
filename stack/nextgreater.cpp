#include <iostream>
#include <vector>
#include <stack>


using namespace std;
int main(){
vector <int> arr={1,6,7,8,9,3,4,5};
stack <int> ans;
    vector<int> v(arr.size(), -1);

for(int i=arr.size()-1; i>=0; i-- ){
while(!ans.empty() && ans.top()<= arr[i]){
ans.pop();
}
if(ans.empty())
v[i]=-1;
else{
    v[i]=ans.top();
}
ans.push(arr[i]);
}
for(int vl:v){
    cout<<vl<<" ";
}
return 0;
}