#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Program 1: Hot Air Balloons" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Hot Air Balloon" << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    if (choice == 2) {
        // Prompt for entering the number of levels
        int size;
        cout << "What is the size of the hot air balloon? ";
        cin >> size;

        // Display hot air balloon based on the entered size
        for (int i = 0; i < size; ++i) {
            cout << setw(size + 4 - i);
            if (i == 0) {
                cout << "____" << endl;
            } else {
                cout << "/";
                cout << setw(i * 2) << "|";
                cout << setw((size - i) * 2) << "\\" << endl;
            }
        }

        // Display UIC text for size 5 or more
        if (size >= 5) {
            int linesAbove = (size - 4) / 2;
            int linesBelow = size - linesAbove - 4;

            for (int i = 0; i < linesAbove; ++i) {
                cout << setw(size + 4) << "|" << endl;
            }

            cout << setw(size + 4) << "| U" << endl;
            cout << setw(size + 4) << "| I" << endl;
            cout << setw(size + 4) << "| C" << endl;

            for (int i = 0; i < linesBelow; ++i) {
                cout << setw(size + 4) << "|" << endl;
            }
        }

        cout << setw(size + 4) << "\\" << setw(size * 2) << "/" << endl;
        cout << setw(size + 4) << "====" << endl;
        cout << setw(size + 7) << "\\||/" << endl;
        cout << setw(size + 7) << " ||" << endl;
        cout << setw(size + 5) << "####" << endl;
        cout << setw(size + 5) << "####" << endl;
    }

    return 0;
}
