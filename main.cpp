#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::rand;

int i, j;

int main()
{
    srand(time(NULL));
    double tab[4][5];
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            tab[i][j] = (rand() % 21) + (-10);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            cout << tab[j][i] << "\t";
        }
        cout << endl;
    }
}
