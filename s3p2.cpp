#include "iostream"

using namespace std;

void permuta(int n, int a[], int k) {
    for (int i = 1; i <= k; i++) {
        int x = a[1];
        for (int j = 2; j <= n; j++)
            a[j - 1] = a[j];
        a[n] = x;
    }
}

int main() {
    int a[101], n, k;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;

    permuta(n, a, k);

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}