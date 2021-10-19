/* Group Battle
Mohammad Shafayet Hossain A19EC4016
MD Monirul Islam Molla    A19EC4013 */

#include <iostream>
//#include <iomanip>
using namespace std;

void BubbleSort(int array[], int size)
{
    static int set = 0;
    int swapnum = 0;

    for (int j = 0; j < size - 1; j++)
    {

        if (array[j] > array[j + 1])
        {
            swap(array[j + 1], array[j]);
            swapnum++;
        }
    }
    set++;
    cout << "\nThere are " << swapnum << " swap maps for input data set " << set << endl;
}

int main()
{
    int n, y = 0;
A:
    cout << "How many Numbers:";
    cin >> n;
    if (n > 5)
        {
        	return 0;
		}

    cout << endl;
    int arrayP[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrayP[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrayP[i] << " ";
    }

    BubbleSort(arrayP, n);
    goto A;
    return 0;
}
