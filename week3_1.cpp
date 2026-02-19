#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v; // declaration of vector
int n,x,i,y;
cout << "Enter no of elements:";
cin >> n;
for (i=0; i<n; i++)
{
cout << "Enter element " << i+1 << endl;
cin >> x;
v.push_back(x);  // inserts the element into vector
}
cout << " Enter position:";
cin >> y;
v.insert(v.begin()+y,10);
cout << "Vector elements are:" << endl;
for(i=0;i<v.size();i++)
{
cout << v[i] << " ";
}
v.erase(v.begin());
cout << "Vector elements are:" << endl;
for(auto x:v)
{
cout << x << " ";
}

return 1;
}