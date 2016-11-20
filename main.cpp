//Задание 1 с массивами
#include <iostream>

using namespace std;

void delete_duplicates ( int l, int ar[] )
{
    int n;
    bool good;
    //цикл по всему массиву
    for ( int i = 0; i < l; i++ )
    {
        n = ar[i];
        good = true;
        //цикл по предыдущим элементам массива
        for ( int j = 0; j < i; j++ )
        {
            if (n == ar[j])
            {
                //нашли повтор, не учитываем элемент n
                good = false;
                break;
            }
        }

        if (good == true)
        {
            //выводим элеиент массива, не имеющий повтора
            cout << n << " ";
        }
    }
}

int main()
{
    setlocale (0, "Russian");
    int l = 10;
    int Array[l];

    cout << "введите число - элемент массива\n";
    //вводим элементы в цикле
    for ( int i = 0; i < l; i++ )
        cin >> Array[i];
    delete_duplicates (l, Array);
}
