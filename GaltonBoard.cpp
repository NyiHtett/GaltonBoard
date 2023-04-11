#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void Galton(int* counts)
{
    cout << "haha";
}

int main()
{
    int num;
    cout << "number of times for gambling: ";
    cin >> num;
    int* counts[10];
    for(int i = 0; i < 10; i++)
    {
        counts[i] = new int[i+1];
    }
    
    
    for(int n = 0; n < num; n++)
    {
        counts[0][0]++;  //hit the first one all the time
        int j = 0;
        for(int i = 1; i < 10; i++)
        {
            
                int r = rand() % 2;
                if(r == 1)
                {
                    j++;     //if odd, hit the right one  //else, hit the left one (straight in this case)
                }
                counts[i][j]++;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << setw(4) << counts[i][j];
        }
        cout << endl;
    }
}
