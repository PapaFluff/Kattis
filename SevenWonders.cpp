// All needed preprocessor directives
#include <iostream>
#include <string>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    string ScientificCards;     // string for scientific cards
    cin >> ScientificCards;     // Takes user input

    int T = 0, C = 0, G = 0;    // These will be incremented

    // Goes through the string incrementing if T, C, or G is found
    for (auto i : ScientificCards)
    {
        if (i == 'T')   // T is found
        {
            T++;    // Increments for T
        }

        if (i == 'C')   // C is found
        {
            C++;    // Increments for C
        }

        if (i == 'G')   // G is found
        {
            G++;    // Increments for G
        }
    }

    int sum = min(min(T, C), G) * 7;
    sum += (T*T)+(C*C)+(G*G);
    cout << sum << endl;
    
    return 0;   // Returns 0 to end program properly for int main
}