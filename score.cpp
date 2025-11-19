
#include <iostream>
using namespace std;

int main() {
    double mark;
    char grade;

    cout << "Enter your mark (0-100): ";
    cin >> mark;

    if (mark >= 90)
        grade = 'A';
    else if (mark >= 80)
        grade = 'B';
    else if (mark >= 70)
        grade = 'C';
    else if (mark >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Your grade is: " << grade << endl;

    return 0;
}
