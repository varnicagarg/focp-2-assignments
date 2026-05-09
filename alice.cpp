#include <iostream>

using namespace std;

long long countOdds(long long n) {
    if (n < 0) return 0;
    return (n + 1) / 2;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long L, R;
    if (!(cin >> L >> R)) return 0;

    
    long long totalOddsInRange = countOdds(R) - countOdds(L - 1);


    if (totalOddsInRange % 2 != 0) {
        cout << "odd" << endl;
    } else {
        cout << "even" << endl;
    }

    return 0;
}