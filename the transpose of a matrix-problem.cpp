//study 2d , 3d array and how to make the user enter the elements himself
// i don't understand it pretty well
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // int arr[3][3] = {
    //     {1, 0, 0},
    //     {0, 5, 0},
    //     {0, 0, 9}};

    int temp;
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }

    cout << "the transpose of the matrix is:-\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "{ ";
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                cout << arr[i][j];
            }
            else
            {
                cout << arr[i][j] << " , ";
            }
        }
        cout << " }" << endl;
    }

    return 0;
}
