#include <iostream>
using namespace std;

int main()
{
    int counter = 0, dist = 0, now1 = 1, now2 = -2, now3 = -1, subscript1 = 0, subscript2 = 0;
    while (cin >> now1 && now1)
    {
        if (now2 > now1 && now2 > now3 && !subscript1)
            subscript1 = counter;
        else if (now2 > now1 && now2 > now3)
            subscript2 = counter;
        if ((dist == 0 || (subscript2 - subscript1 < dist && subscript1 != subscript2)) && subscript2){
            dist = subscript2 - subscript1;
            subscript1 = subscript2;
        } else if (subscript1 != subscript2 && subscript2)
            subscript1 = subscript2;
        if (counter != 0){
            int t = now2;
            now2 = now1;
            if (counter > 1)
                now3 = t;
        }
        else
            now3 = now1;
        ++counter;
    }
    cout << dist;
    return 0;
}