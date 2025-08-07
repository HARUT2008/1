#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N (1-1000): ";
    cin >> N;
    for (int i = 1; i < N; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    cout << "Sum = " << sum << endl;
    return 0;
}