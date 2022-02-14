#include "iostream"

using namespace std;

void f(int n) {
    if (n) {
        f(n / 3);
        cout << n % 3;
    }
}

int main() { f(32); }