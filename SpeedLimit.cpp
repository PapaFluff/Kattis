// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int N;  // Creates an integer to represent how many pairs of values

    // While loop that gives the total miles over an elapsed time
    while(true)
    {
        cin >> N;   // Input how many pairs
        if (N == -1)    // Breaks loop
        {
            break;
        }

        int prev = 0;   // Integer for the prev elapsed time
        int miles = 0;  // The total over an elapsed time

        // For loop that creates and runs through the pair of values
        for (int i = 0; i < N; i++)
        {
            int speed, curr;    // Speed in mph and time
            cin >> speed >> curr;   // Takes input
            miles +=  speed * (curr - prev);    // Does calculation
            prev = curr;    // Sets the prev to the current time
        }

        cout << miles << " miles" << endl;  // Outputs total miles
    }
    return 0;   // Returns 0 to end program properly for int main
}