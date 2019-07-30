// All needed preprocessor directives
#include <iostream>
#include <string>
using namespace std;

// Main function, the primary driver of the program
int main() 
{

    bool Ball[3] = {true, false, false};    // Creates an array bool for where the ball is located
    string BorkosMoves;     // Creates a string to be Borkos moves
    cin >> BorkosMoves;     // Takes  input for string

    // For loop that records his  swaps based on diagram on Kattis
    for(int i = 0; i < BorkosMoves.size(); i++)
    {
        if(BorkosMoves[i] == 'A')
        {
            swap(Ball[0], Ball[1]);
        }
        else if(BorkosMoves[i] == 'B')
        {
            swap(Ball[1], Ball[2]);
        }
        else if(BorkosMoves[i] == 'C')
        {
            swap(Ball[0], Ball[2]);
        }
    }

    if(Ball[0])         // The ball is located at the 1st cup
    {
        cout << "1" << endl;
    }
    else if(Ball[1])         // The ball is located at the 2nd cup
    {
        cout << "2" << endl;
    }
    else if(Ball[2])         // The ball is located at the 3rd cup
    {
        cout << "3" << endl;
    }

    return 0;   // Returns 0 to end program properly for int main
}