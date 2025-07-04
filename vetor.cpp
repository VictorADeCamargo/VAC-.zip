#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int maior = v[0];
    for (int i = 1; i < n; ++i)
        if (v[i] > maior)
            maior = v[i];

    cout << maior << endl;
    return 0;
}
