#include <iostream>
using namespace std;

int main()
{
    int n, credit, totalCredits = 0;
    float gradePoint, totalPoints = 0, cgpa;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        cout << "Enter Grade Point (10,9,8,7,6,5,0): ";
        cin >> gradePoint;

        totalCredits = totalCredits + credit;
        totalPoints = totalPoints + (gradePoint * credit);
    }

    cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalPoints << endl;
    cout << "CGPA = " << cgpa << endl;

    return 0;
}
