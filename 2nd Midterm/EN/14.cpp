#include <iostream>

using namespace std;

int changes(int a[100][100], int n) {
    int count0(0), count1(0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] != a[j][i]) {
                if (a[i][j] == 0) {
                    count0++;
                }
                if (a[i][j] == 1) {
                    count1++;
                }
            }
        }
    }
    if (count0 < count1) {
        return count0;
    } else { return count1; }
}

int main() {
    int n;
    int a[100][100];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int countdiag(0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j && a[i][j] == 1) {
                a[i][j] = 0;
                countdiag++;
            }

        }
    }
    int b = changes(a, n) + countdiag;
    cout << b;

}
