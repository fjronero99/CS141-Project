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
        
        int count = 0;
        int countR =0;

        countR= 1;

        cout << setw(3*size) << "___"<<endl;
        while (count < size){
            cout << setw( countR)<< "/";
            cout << setw(3+count) << "\\" << endl;
            countR--;
            count++;
        }

        // cout << setw(3*size) << "____"<< endl;
        // for(int i = 0; i < size; i++){
        //     cout <<setw(2-count);
        //     cout << "/" << setw(5 + count);
        //     cout << "\\" << endl;
        //     count++;
        // }


    }


    return 0;
}
