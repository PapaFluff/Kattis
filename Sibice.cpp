// All needed preprocessor directives
#include <iostream>
#include <cmath>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int N, W, H;      // num of matches, width, and height
    cin >> N >> W >> H; // Takes input for the paremeters of the box
    int length = sqrt((W * W)+(H * H));     // length of box
    
    // For loop for num of matches that checks if the match fits or not
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;        // input the length of a match

        if (temp <= length)     // Match fits
        {
            cout << "DA" << endl;
        }
        else                    // Match DOES NOT fit
        {
            cout << "NE" << endl;
        }
    }

    return 0;   // Returns 0 to end program properly for int main
}