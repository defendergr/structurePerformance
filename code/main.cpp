#include <iostream>

using namespace std;


int main() {
    // Predefined student details
    string name = "Dio";
    string surname = "Alex";
    string student_id = "123456";

    // 3x3 C-style array of marks
    int marks[3][3] = {
        {86, 90, 78},
        {88, 76, 92},
        {81, 89, 84}
    };

    int number_of_rows = 3;
    int number_of_columns = 3;

    // Print student details
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Student ID: " << student_id << endl;

    cout << "\nMarks (printed column by column):" << endl;

    // Print array contents
    for (int col = 0; col < number_of_columns; col++) {
        for (int row = 0; row < number_of_rows; row++) {
            cout << marks[row][col] << " ";
        }
        cout << endl;
    }


    return 0;
}
