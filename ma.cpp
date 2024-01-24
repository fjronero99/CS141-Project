#include <iostream>
#include <iomanip>
#include <cstdlib> // Include this header for rand() and srand()
#include <ctime>   // Include this header for time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Hot Air Balloons" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Hot Air Balloon" << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        // Simulate rolling a fair six-sided dice and get a random number between 1 and 6
        // There still a possiblity 8 appear, I many ways could solve it
        int userNumber = rand() % 6 + 1;

        // Display dice based on the random number
        cout << "+---+\n";
        for (int i = 0; i < 3; ++i) {
            cout << "|";
            if (i == 1) {
                if (userNumber == 1) {
                    cout << "   ";
                } else if (userNumber == 2 || userNumber == 3) {
                    cout << " o ";
                } else if (userNumber == 4 || userNumber == 5) {
                    cout << "o o";
                } else if (userNumber == 6) {
                    cout << "o o";
                } else {
                    cout << "   "; // Handle other values gracefully
                }
            } else {
                if (userNumber >= 4 && userNumber != 8) {
                    cout << "o";
                } else {
                    cout << " ";
                }
                if (userNumber % 2 == 1) {
                    cout << "o";
                } else {
                    cout << " ";
                }
                if (userNumber >= 2 && userNumber != 8) {
                    cout << "o";
                } else {
                    cout << " ";
                }
            }
            cout << "|\n";
        }
        cout << "+---+";
    } else if (choice == 2) {
        // Display Hot Air Balloon
        int size;
        cout << "What is the size of the hot air balloon? ";
        cin >> size;

        // Validate size
        if (size < 2) {
            cout << "Invalid size. Size must be 2 or greater." << endl;
        } else {
            // Display Hot Air Balloon based on user's input size
            // ... (Your code for the hot air balloon goes here)
        }
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
