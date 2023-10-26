#include <iostream>

using namespace std;

int f(int n)
{
    if (n == 0)
        return 0;

    else
        return n % 10 + f(n / 10);

}

int main() {
    int n;
    cout << "n = "; cin >> n;

    cout << "f = " << f(n) << endl;

    // Обчислення глибини рекурсії
    int depth = 0;
    while (n > 0)
    {
        n /= 10;
        depth++;
    }
    cout << "depth " << depth << endl;

    return 0;
}
