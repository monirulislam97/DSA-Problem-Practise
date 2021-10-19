/* Group Battle
Mohammad Shafayet Hossain A19EC4016
MD Monirul Islam Molla    A19EC4013 */

#include <iostream>
using namespace std;

void BubbleSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool sorted = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {

                swap(array[j + 1], array[j]);
                sorted = 1;
            }
        }
        if (sorted == 0)
        {
            break;
        }
    }
}

int main()
{
    int array[] = {-4, -9, 5, 8, 3, -6};
    int temp[] = {};

    for (int i = 0; i < 6; i++)
    {
        temp[i] = array[i] * array[i];
    }
    cout << "Temporaray Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << temp[i] << " ";
    }

    BubbleSort(temp, 6);
    cout << endl
         << endl;
    cout << "Sorting Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}
