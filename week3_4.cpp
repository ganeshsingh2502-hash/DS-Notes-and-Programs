#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);   // duplicate ignored

    cout << "Set elements (sorted & unique): ";
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    int key = 20;
    if(s.find(key) != s.end())
        cout << "\nElement " << key << " found";
    else
        cout << "\nElement not found";

    return 0;
}
