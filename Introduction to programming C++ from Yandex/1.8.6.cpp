#include <iostream>

using namespace std;

int main()
{
    int n, k, a[10][10];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i - j == k){
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}