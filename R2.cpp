// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int R1;     // Creates an int to represent R1
    int S1;     // Creates an int to represent S1
    
    cin >> R1;  // Takes input for R1
    cin >> S1;  // Takes input for S1

    int R2 = (2 * S1) - R1;     // Declares R2 to represent S1 multipled by 2 and subtracted R1
    cout << R2 << endl;     // Ouputs R2
    
    return 0;   // Returns 0 to end program properly for int main
}