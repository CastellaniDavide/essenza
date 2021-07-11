#include <bits/stdc++.h>
using namespace std;
#define DEBUG

int K, N, sol;
vector<int> value;

int main()
{
    freopen("input.txt", "r", stdin);
#ifndef DEBUG
    freopen("output.txt", "w", stdout);
#endif // DEBUG

    cin >> K >> N;
    value.resize(N);
    sol = INT_MIN;

    for (size_t i = 0; i < N; ++i)
        cin >> value[i];

    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 1; j < K + 1 && i + j < N; ++j) {
            if (value[i + j] - value[i] > sol)
                sol = value[i + j] - value[i];
        }
    }

    cout << sol << endl;
}
