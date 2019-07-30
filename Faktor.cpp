// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int A;  // The number of articles you plan to publish 
    int I;  // The impact factor the owners require
    
    cin >> A;   // Takes input for articles you plan to publish
    cin >> I;   // Takes input for impact factor the owners require

    double Solution = (A * I) - (A - 1);    // The minimal number of scientists required to bribe
    
    cout << Solution << endl;   // Outputs result

    return 0;   // Returns 0 to end program properly for int main
}