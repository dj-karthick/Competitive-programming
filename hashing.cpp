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





void hashingNumbers() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    //Precomputation
    int hash[13] = {0};       // hash array size depends on the max element of the array arr[] for ex : if max element is 14 then your hash array size should be 15 size.
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;        // If arr[i] have some number for ex : 7,  then it increase the count in the hash array index of 7.
    }                             // It loop till the size of the array arr[] for each number of arr[] it going to increase count in the hash array hash[] of index  (the index number is the each numbers in the array arr[]).

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;   // This is where fetching takes place.
    }
}

void hashingString(){
    string s;
    cin >> s;

    //precomputation
    int hash[26] = {0};   // 26 = because alphabets have 26 characters only ie: max element size.
    //int hash[256];
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;     // We are subracting char 'a' with each char in the string to get index for hash array.
        //hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;  // character  inside the hash array will cast into hashkey value.
        //cout << hash[c];   //for all characters , both lower case and upper case.

    }


//     In string - By using map you can store characters as keys and 
//    counts as values by this you can access the count of characters 
//    using characters as key.
    //    map<char, int> mpp;
    //    for(int i=0; i< s.size(); ++){
    //     mpp[s[0]]++;
    //    }



}

void hashingUsingMap(){
    int n;
    cin >> n;
    int arr[n];  
    unordered_map<int, int> mpp;  
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it : mpp) cout << it.first << "->" << it.second << endl;

    // //precomputing
    // map<int, int> mpp; // Map stores values in sorted order
    // for(int i=0; i<n; i++){
    //     mpp[arr[i]]++;
    // }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }

    //Iterate in the map
    for(auto it : mpp) cout << it.first << "->" << it.second << endl;
}


int main(){
    //hashingNumbers();
    //hashingString();
    hashingUsingMap();
    return 0;
}
