#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[101] = "Ravi";
    students[102] = "Anita";
    students[103] = "Kiran";

    cout << "Student Details:\n";
    for(map<int, string>::iterator it = students.begin(); it != students.end(); it++) {
        cout << "ID: " << it->first << " Name: " << it->second << endl;
    }

    return 0;
}
