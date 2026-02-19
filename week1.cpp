#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    float marks;

public:
    Student()
    {
        rollNumber = 0;
        name = "";
        marks = 0.0;
    }

    // Function to input details
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display details
    void display()
    {
        cout << rollNumber << "\t" << name << "\t" << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student object with Roll No " << rollNumber << " is destroyed." << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // Dynamic allocation of Student objects
    Student *students = new Student[n];
    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        students[i].input();
    }
    // Display details
    cout << "\nRollNo\tName\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }
    // Release allocated memory
    delete[] students;
    return 0;
}
