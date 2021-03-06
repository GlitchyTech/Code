#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

/* Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
Формат входных данных
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:
1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:
NO
Sample Input 2:
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:
YES
*/

using namespace std;

int main()
{
    int count = 0;
    vector <int> x(8);
    vector <int> y(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int j = 0; j < 8; j++)
    {
        for (int i = j + 1; i < 8; i++)
        {
            if ( ( abs(x[j] - x[i]) == abs(y[j] - y[i]) ) || (x[j] == x[i] || y[j] == y[i]) )
            {
                cout << "YES";
                exit(0);
            }
            else
            {
                count++;
            }
        }
    }
    if (count > 0)
    {
        cout << "NO";
    }
    return 0;
}