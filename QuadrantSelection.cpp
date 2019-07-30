// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int x;  // Creates a integer value for x
    int y;  // Creates a integer value for y

    cin >> x;   // Takes input for the x-value
    cin >> y;   // Takes input for the y-value

    // If the input happens to be 0 for either x-value or y-value, the user is asked for input again
    if (x == 0 || y == 0)
    {
        cin >> x;   // Reinput for x
        cin >> y;   // Reinput for y
    }
    else if ((x > 0) && (y > 0))    // Outputs Quadrant 1
    {
        cout << "1" << endl;
    }
    else if ((x < 0) && (y > 0))    // Outputs Quadrant 2
    {
        cout << "2" << endl;
    }
    else if ((x < 0) && (y < 0))    // Outputs Quadrant 3
    {
        cout << "3" << endl;
    }
    else if ((x > 0) && (y < 0))    // Outputs Quadrant 4
    {
        cout << "4" << endl;
    }


    return 0;   // Returns 0 to end program properly for int main
}