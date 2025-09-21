#include <iostream>
using namespace std;

int main()
{
    int numbers[][4] = {
        {2, 3, 4},       
        {5, 6, 7},      
        {8, 9, 10, 11}
    };

    int rows = 3; 
    int cols = 4; 

   
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
