// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int H, M;       // int values for H = hours, M = minutes
    cin >> H >> M;  // Takes input for hours and minutes


    H--;    // Goes back an hour
    M += 15;    // Adds 15 minutes to the current minutes

    // Prioritizes the hours and minutes to the 24-hour notation
    if (H < 0)
    {
        H += 24;
    }

    if (M >= 60)
    {
        M -= 60;
        H++;
    }

    cout << H << " " << M << endl;

    return 0;   // Returns 0 to end program properly for int main
}