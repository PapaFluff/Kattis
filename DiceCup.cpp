// All needed preprocessor directives
#include <iostream>
using namespace std;

// Main function, the primary driver of the program
int main() 
{
    int N, M;
    while(cin >> N >> M)
    {
    	int outcomes[N+M+1];

    	for(int i = 0; i < N+M+1; ++i)
    		outcomes[i] = 0;

    	for(int i = 1; i <= N; ++i)
    	{
    		for(int c = 1; c <= M; ++c)
    		{
    			if(outcomes[i+c] == 0)
    				outcomes[i+c] = 1;
    			else
    				outcomes[i+c]++;
    		}
    	}
    	int print[N+M+1];
    	int max = 0;
    	int index = 0;
    	for(int i = 0; i < N+M+1; ++i)
    	{
    		if(outcomes[i] > max)
    		{
    			max = outcomes[i];
    			index = 0;
    			print[index] = i;
    		}
    		else if(outcomes[i] == max)
    		{
    			index++;
    			print[index] = i;
    		}
    	}
    	for(int i = 0; i <= index; ++i)
    		cout << print[i] << endl;
    }
    
    return 0;   // Returns 0 to end program properly for int main
}