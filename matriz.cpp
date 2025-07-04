#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n)), B(n, vector<int>(n)), R(n, vector<int>(n, 0));

    for (auto& linha : A)
        for (int& x : linha)
            cin >> x;

    for (auto& linha : B)
        for (int& x : linha)
            cin >> x;

    char op;
    cin >> op;

    if (op == 'a') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                R[i][j] = A[i][j] + B[i][j];
    } else if (op == 's') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                R[i][j] = A[i][j] - B[i][j];
    } else if (op == 'm') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                for (int k = 0; k < n; ++k)
                    R[i][j] += A[i][k] * B[k][j];
    }

    for (auto& linha : R) {
        for (int x : linha)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
