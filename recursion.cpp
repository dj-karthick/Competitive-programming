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

int sumOfNNumbersUsingParameterizedWay(int i, int sum){    // This way we adding i to the parameter every time to calculate sum. 
    if(i<1){                                               // You have to understand when to use parameterized and functional methods ie: means to return something.
        cout << sum << endl;
        return 0;
    }
    sumOfNNumbersUsingParameterizedWay(i-1, sum+i);
}

int sumOfNNumbersUsingFuctionalWay(int n){
    if(n == 0) return 0;                                   //Tc = O(N)
    return n + sumOfNNumbersUsingFuctionalWay(n-1);      // Sc = O(N) 
}

int factorialOfNNumbers(int n){
    if(n == 1) return 1;
    return n * factorialOfNNumbers(n-1);
}

int arr[6] = {1,2,4,3,5, 6};
int reverseAnArrayUsingTwoPointer(int l, int r){
    if(l == r) return 0;
    swap(arr[l], arr[r]);
    reverseAnArrayUsingTwoPointer(l+1, r-1);
}

int reverseAnArrayUsingOnePointer(int i, int array[], int n){     
    if(i == n/2) return 0;
    swap(array[i], array[n-i-1]);
    reverseAnArrayUsingOnePointer(i+1, array, n);
}

int checkForPalindrome(int i, string &str, int n){
    if(i==n/2) return true;
    if(str[i] != str[n-i-1]) return false;      // Tc = O(N/2)
    return checkForPalindrome(i+1, str, n);
}

int fibonaciNumberUsingMultipleRecursionCall(int n){
    if(n <= 1) return n;
    int last = fibonaciNumberUsingMultipleRecursionCall(n-1);  // Tc = O(2^n) - For every recursion call it calls 2 recursion call so 2^n.
    int sLast = fibonaciNumberUsingMultipleRecursionCall(n-2);
    return last + sLast;
}




int main() {

    int n;
    cin >> n;
    cout << fibonaciNumberUsingMultipleRecursionCall(n);
    //int array[n];
    // string str; 
    // getline(cin, str);
    // int n = str.length();
    // if(checkForPalindrome(0, str, n)) {
    //     cout << str<< " : It is palindrome."; 
    // }
    // else {
    //     cout << str << " : It is not a palindrome.";
    // }
    
    
    return 0;
}
