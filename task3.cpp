#include <iostream>
using namespace std;

int main() {
    float mark;
    cout << "Enter the mark: ";
    cin >> mark;

    if (mark >= 90 && mark <= 100) {
        cout << "A" << endl;
    } else if (mark >= 80 && mark < 90) {
        cout << "B" << endl;
    } else if (mark >= 70 && mark < 80) {
        cout << "C" << endl;
    } else if (mark >= 60 && mark < 70) {
        cout << "D" << endl;
    } else if (mark >= 50 && mark < 60) {
        cout << "F" << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
