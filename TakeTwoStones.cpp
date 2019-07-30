// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int N;  // Creates an integer to represent the number of stones

    // While loop for determining the winner based on user input
    while(cin >> N)
    {
        if (N % 2 == 0)     // If number is even, Bob is the  winner
        {
            cout << "Bob" << endl;
        }
        else    // if not even, Alice is the winner
        {
            cout << "Alice" << endl;
        }
    }

    return 0;   // Returns 0 to end program properly for int main
}