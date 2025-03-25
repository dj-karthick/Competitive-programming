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

int noOfDigit(int n) {
    int count = 0;
    while(n>0){
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        count = count + 1;
        n = n/10;
    }
    return count;
} 

int main (){
    int n;
    cin >> n;
    int cnt = noOfDigit(n);
    cout << endl << cnt << endl;
    return 0;
}
