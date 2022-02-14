#include "iostream"

using namespace std;

int main() {
    int x, y, r, k;

    cin >> x >> y;

    r = x;
    while (y <= r)
        r = r - y;

    k = (x - r) / y;
    cout << k << " " << r;
}