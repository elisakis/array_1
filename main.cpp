#include <iostream>

using namespace std;

void delete_duplicates ( int l, int ar[] )
{
    int n;
    bool good;
    for ( int i = 0; i < l; i++ )
    {
        n = ar[i];
        good = true;
        for ( int j = 0; j < i; j++ )
        {
            if (n == ar[j])
            {
                good = false;
                break;
            }
        }

        if (good == true)
        {
            cout << n << " ";
        }
    }
}

int main()
{
    setlocale (0, "Russian");
    int l = 10;
    int Array[l];

    cout << "Enter number\n";
    for ( int i = 0; i < l; i++ )
        cin >> Array[i];
    delete_duplicates (l, Array);
}
