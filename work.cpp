#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Hot Air Balloons" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Hot Air Balloon" << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        // Original art - Dice
        // User picks a number between 1 and 6
        cout << "Enter a number between 1 and 6: ";
        int diceNumber;
        cin >> diceNumber;

        // Validate user input
        if (diceNumber < 1 || diceNumber > 6) {
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            return 1; // Exit with an error code
        }

        // Display the dice based on user input
        for (int i = 0; i < diceNumber; ++i) {
            cout << "+-----+ ";
        }
        cout << endl;
        for (int i = 0; i < diceNumber; ++i) {
            cout << "|     | ";
        }
        cout << endl;
        for (int i = 0; i < diceNumber; ++i) {
            cout << "|  *  | ";
        }
        cout << endl;
        for (int i = 0; i < diceNumber; ++i) {
            cout << "|     | ";
        }
        cout << endl;
        for (int i = 0; i < diceNumber; ++i) {
            cout << "+-----+ ";
        }
        cout << endl;
    } else if (choice == 2) {
        // Hot Air Balloon
        cout << "What is the size of the hot air balloon? ";
        int size;
        cin >> size;

        // Validate user input
        if (size < 2) {
            cout << "Invalid input. Size must be 2 or greater." << endl;
            return 1; // Exit with an error code
        }

        // Display the hot air balloon
        // ... (implement the hot air balloon drawing logic based on the provided specifications)
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
        return 1; // Exit with an error code
    }

    return 0; // Exit successfully
}
