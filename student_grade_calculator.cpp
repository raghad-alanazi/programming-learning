#include <iostream>
using namespace std;

int main() {
    string name;
    double grade1, grade2, grade3;
    double average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter grade 1: ";
    cin >> grade1;

    cout << "Enter grade 2: ";
    cin >> grade2;

    cout << "Enter grade 3: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;

    cout << "Student: " << name << endl;
    cout << "Average: " << average << endl;

    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 80)
        cout << "Grade: B";
    else if (average >= 70)
        cout << "Grade: C";
    else if (average >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
