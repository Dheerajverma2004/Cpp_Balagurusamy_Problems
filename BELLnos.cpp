// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the Bell number for a set with n elements
int bellNumber(int n) {
    int bell[n + 1][n + 1];
    bell[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        bell[i][0] = bell[i - 1][i - 1];

        for (int j = 1; j <= i; j++) {
            bell[i][j] = bell[i - 1][j - 1] + bell[i][j - 1];
        }
    }

    return bell[n][0];
}

int main() {
    vector<int> set;
    int n;
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    // Prompt the user to enter the elements of the set
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        set.push_back(element);
    }

    // Calculate the number of possible partitions using the Bell number formula
    int numPartitions = bellNumber(n);
    cout << "The number of possible partitions of the set {";
    for (int i = 0; i < n; i++) {
        cout << set[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "} is " << numPartitions << endl;

    return 0;
}
