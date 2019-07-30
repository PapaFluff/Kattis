// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main()
{
    int Xmegabytes, months;   // int value for the megabytes each month and months

    cin  >> Xmegabytes >> months;   // Takes input for megabytes each month and months

    int USED = 0;   // How much Pero uses

    // For loop that figures out how much Pero uses
    for(int i = 0; i < months; i++)
    {
        int temp;
        cin >> temp;
        USED += temp;
    }

    cout << Xmegabytes * (months+1) - USED << endl; // Outputs how much megabytes is left

    return 0;   // Returns 0 to end program properly for int main
}