#include <iostream>         // For standard input/output
#include <vector>           // For dynamic arrays
#include <algorithm>        // For sorting, searching, etc.
#include <set>              // For ordered sets
#include <map>              // For hash maps
#include <unordered_map>    // For unordered hash maps
#include <queue>            // For priority queues and queues
#include <stack>            // For stacks
#include <limits>           // For numeric limits (e.g., infinity)
#include <cmath>            // For mathematical operations


using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j)
    }
}
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        pattern3(n);
    }
    return 0;
}
