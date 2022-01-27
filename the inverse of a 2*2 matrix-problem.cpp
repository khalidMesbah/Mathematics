#include <iostream>
using namespace std;

int main()
{
    long arr[2][2] = {
        {1, 2},
        {4, 5}};

    long temp;
    long detArr = 1 / (arr[1][1] * arr[0][0] - arr[0][1] * arr[1][0]);
    arr[0][1] *= -1;
    arr[1][0] *= -1;
    temp = arr[1][1];
    arr[1][1] = arr[2][2];
    arr[2][2] = temp;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            arr[i][j] *= detArr;

    cout << "the inverse of the 2*2 matrix is:-\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "{ ";
        for (int j = 0; j < 2; j++)
        {
            if (j == 1)
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
