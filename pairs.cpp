#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 10000001;
int prime_count[MAXN];
int power_of_two[32]; 
void precompute() {
    for (int i = 2; i < MAXN; ++i) {
        if (prime_count[i] == 0) {
            for (int j = i; j < MAXN; j += i) {
                prime_count[j]++;
            }
        }
    }
 
    power_of_two[0] = 1;
    for (int i = 1; i < 31; ++i) {
        power_of_two[i] = power_of_two[i - 1] * 2;
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int n;
        cin >> n;
        
        if (n == 1) {
         
            cout << "1\n";
        } else {
    
            int k = prime_count[n];
            cout << power_of_two[k] << "\n";
        }
    }

    return 0;
}