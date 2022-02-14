#include "fstream"
#include "iostream"

using namespace std;

ifstream f("s3p3-BAC.IN");
ofstream g("s3p3-BAC.OUT");

int main() {
    int x, s[100001], c = 1;
    while (f >> x)
        s[c++] = x;

    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (s[j] < s[i])
                swap(s[i], s[j]);

    for (int i = 1; i < c; i++)
        g << s[i] << " ";
}