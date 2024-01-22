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
   
    if (choice ==1){
        int size;
        cout << "What is the size of the hot air balloon? ";
        cin >> size;
                // Display balloon
        cout << setw(4*size) << "____" << endl;
        cout << setw(3*size) << "/" << setw(3*size) << "\\" << endl;
        cout << setw(2*size) << "/" << setw(5*size) << "\\" << endl;

        // Display vertical sections
        for (int i = 0; i < 2*size; ++i) {
            cout << "|";
            cout << setw(2*size - 1) << " ";
            cout << "|" << endl;
        }

        cout << "\\" << setw(5*size) << "/" << endl;
        cout << " \\" << setw(3*size) << "/" << endl;

        // Display bottom of the balloon
        cout << setw(4*size) << "====" << endl;

        // Display connection between balloon and basket
        cout << setw(3*size) << "\\||/" << endl;
        cout << setw(4*size) << "||" << endl;
        cout << setw(4*size) << "####" << endl;
        cout << setw(4*size) << "####" << endl;
    }

    return 0;
}