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


int cnt=0;
int printSomethingNTimes(){
    if(cnt == 5) return 0;
    cout << cnt;
    cnt++;
    printSomethingNTimes();
}

int printNameNTimes(int i, int n){
    if(i>n) return 0;                 // Base condition when i gets bigger than n funcrion gets terminated(  function call stops and unwinding starts ).
    cout << "Karthick here." << endl;
    printNameNTimes(i+1, n);      // Tc = O(n) and Sc = O(n)
}

int printNameNTimesInReverse(int i){
    if(i<1) return 0;                 // Base condition when i gets smaller than 1 funcrion gets terminated(  function call stops and unwinding starts ).
    cout << i << " Karthick here. " << endl;
    printNameNTimesInReverse(i-1);      // Tc = O(n) and Sc = O(n), This problem and above problem print linearly from 1-n and n-1.
}

int printNTimesUsingBacktracking(int n){   // we use cout after calling recursion.
    if(n<1) return 0;
    printNTimesUsingBacktracking(n-1);
    cout << n << endl;
}

int printNTimesUsingBacktrackingInReverse(int i, int n){   // We use cout after calling recursion.
    if(i>n) return 0;                                      // It prints in reverse order until 1.
    printNTimesUsingBacktrackingInReverse(i+1, n);
    cout << i << endl;
}

int main() {

    int n;
    cin >> n;
    printNTimesUsingBacktrackingInReverse(1, n);
    
    return 0;
}
