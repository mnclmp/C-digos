#include <iostream>
using namespace std;

int main() {
    int numbers[8];
    int x = 0;

    while (x < 8)
    {
        cin >> numbers[x];
        x++;
    }

    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (numbers[i] > numbers[i+1])
            {
                int inverse = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = inverse;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}
