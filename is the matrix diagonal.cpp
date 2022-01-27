/*
the square matrix (D) is diagonal if 
Dij = 0 ∀ i != j
*/

#include <iostream>
using namespace std;

int main()
{
    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    int arr[3][3] = {
        {1, 0, 0},
        {0, 5, 0},
        {0, 0, 9}
    };

    int is_diagonal = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i != j && arr[i][j] != 0)
                is_diagonal = 0;

    if (is_diagonal)
        cout << "the array is daigonal";
    else
        cout << "the array is NOT daigonal";
        
    return 0;
}
