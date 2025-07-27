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


void diamondPattern(int n){
    for(int i =1; i <=n; i++){

        int space = n-i;
        for(int j=1; j<=space; j++){
            cout << " ";               //loopForSpaces
        }

        for(int j=1; j<=2*i-1; j++){
            cout << "*";             //loopForStars
        }

        cout << endl;                //forNextLine
    }

    for(int i =n-1; i >=1; i--){      //secondHalf

        int space = n-i;
        for(int j=1; j<=space; j++){
            cout << " ";               //loopForSpaces
        }

        for(int j=1; j<=2*i-1; j++){
            cout << "*";             //loopForStars
        }

        cout << endl;                //forNextLine
    }
} 

int minimumMoves(string s){
    int moves=0; 
    int i=0;

    while(i<s.length()){
        if( s[i] == 'X' ){
            moves++;
            i+=3;
        }
        else{
            i++;
        }
    }
    return moves;
}

int findMissingNumber(const vector<int>& arr){
    int n= arr.size()+1;
    int totalSum = n * (n+1) / 2;

    int arrSum = 0;
    for(int num : arr){
        arrSum+=num;
    }
    int missingNumber = totalSum - arrSum;
    cout << missingNumber;
    return 0;
}

void findingSingleElement2(const vector<int>& arr){
    map<int, int> m;
    for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
    }
    for(auto it : m){
        if (it.second == 1){
           cout << "single value is : " << it.first; 
        }
    }
}

 




int main() {
    
    vector<int> v = {1,1,1,4,2,2,3,3,3,2};
    findingSingleElement2(v);
    //cout << "Minimum Moves : " << m << " ";
    return 0;
}
