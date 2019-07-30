// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int N = 0;  // Creates an int value to represent N
    cin >> N;   // Prompts user for input
    
    // Creates a for loop that outputs the entire wizard’s spell by counting from 1 to N
    for (int i = 1; i <= N; i++)
    {
        cout << i << " " << "Abracadabra" << endl;  // Output here
    }
    
    return 0;   // Returns 0 to end program properly for int main
}