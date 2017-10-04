#include <iostream>
#include <string>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 10;

int main()
{
    string grocery[NUM_ROWS][NUM_COLS];

    grocery[0][0]="a";
    grocery[0][1]="b";
    grocery[0][2]="c";
    grocery[0][3]="d";
    grocery[0][4]="e";
    grocery[0][5]="f";
    grocery[0][6]="g";
    grocery[0][7]="h";
    grocery[0][8]="i";
    grocery[0][9]="j";
    
    for(int row=0; row < NUM_ROWS; row++)
    {
        for(int col=0; col< NUM_COLS; col++)
        {
            cout<< grocery[0][col]<<" ";
        }
        cout<< endl;
    }


return 0;
}
