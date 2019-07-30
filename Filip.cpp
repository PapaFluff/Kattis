// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int A;              // Creates an integer for the original A value
    int RemainderA;     // The remainder of A
    int ReversedA = 0;  // A reversed

    int B;              // Creates an integer for the original B value
    int RemainderB;     // The remainder of B
    int ReversedB = 0;  // B reversed

    cin >> A;       // Input for A value
    cin >> B;       // Input for B value

    // While loop to get A reversed
    while (A != 0)
    {
        RemainderA = A % 10;
        ReversedA = ReversedA * 10 + RemainderA;
        A /= 10;

    }

    // While loop to get B reversed
    while (B != 0)
    {
        RemainderB = B % 10;
        ReversedB = ReversedB * 10 + RemainderB;
        B /= 10;

    }
    
    // If/else if statment to get the bigger value from the reversed A and B
    if (ReversedA > ReversedB)
    {
        cout << ReversedA << endl;
    }
    else if (ReversedB > ReversedA)
    {
        cout << ReversedB << endl;
    }

    return 0;   // Returns 0 to end program properly for int main
}