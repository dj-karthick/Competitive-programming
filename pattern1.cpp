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

void pattern1(int n) {
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-i; j++){
            cout <<"* ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for (int i = 0; i<n; i++){
        for (int j = 1; j<=n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for (int i = 0; i<n; i++){
        //for space
        for (int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        //for stars
        for (int j = 0; j<(2*i)+1; j++){
            cout << "*";
        }

        //for space
        for (int j = 0; j<n-i+1; j++){
            cout <<" ";
        }
        cout << endl;
    }
}

void pattern8(int n){

    for (int i = 0; i<n; i++){
        //for space
        for (int j = 0; j<i; j++){
            cout << " ";
        }
        //for stars
        for (int j = 0; j<(2*((n-1)-i))+1; j++){
            cout << "*";
        }

        //for space
        for (int j = 0; j<i; j++){
            cout <<" ";
        }
        cout << endl;
    }
}

void pattern9(int n){
    
    for (int i = 1; i<= (2*n)-1; i++){
        int stars = i;
        if(i > n) stars = (2*n-i);
        for (int j = 0; j<stars; j++){
            cout <<"* ";
        }
        cout << endl;
    }
}

void pattern10(int n){
    int start = 1;
    for (int i = 0; i<n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern11(int n){
    for (int i = 1; i<=n; i++){
        //for numbers
        for (int j = 1; j<=i; j++){
            cout << j ;
        }
        //for space
        for (int j = 0; j< 2*(n-i); j++){
            cout << " ";
        }
        //for numbers
        for (int j = i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern12(int n){
    int num = 1;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void pattern13(int n){
    for (int i=0 ; i<n; i++){
        for (char ch = 'A'; ch<='A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern14(int n){
    for (int i=0 ; i<n; i++){
        for (char ch = 'A'; ch<='A'+(n-i-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n){
    
    for (int i=0 ; i<n; i++){
        
        for (int j=0; j<=i; j++){
            char ch = 'A'+i;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    
    for (int i=0 ; i<n; i++){
        //for space
        for (int j=0; j<(n-i-1); j++){
            cout << " ";
        }
        //for character
        char ch = 'A';
        int breakPoint = (2*i+1) / 2;
        for (int j=0; j<(2*i)+1; j++){
            cout << ch;
            if(j< breakPoint) ch++;
            else ch--;      
        }
        //for space
        for (int j=0; j<(n-i-1); j++){
            cout << " ";
        }    
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern18_1(int n){
    for(int i=0; i<n; i++){
        //for star
        for(int j=0; j<n-i; j++){
            cout <<"*";
        }
        //for space
        for(int j=0; j<2*i; j++){
            cout <<" ";
        }
        //for star
        for(int j=0; j<n-i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}

void pattern18_2(int n){
    for(int i=0; i<n; i++){
        //for star
        for(int j=0; j<=i; j++){
            cout <<"*";
        }
        //for space
        for(int j=0; j<2*(n-1-i); j++){
            cout <<" ";
        }
        //for star
        for(int j=0; j<=i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}

void pattern19(int n){
    for(int i=1; i<=2*n-1; i++){
        //for star
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        //for space
        int space = 2*(n-i);
        if(i>n) space = 2*(i-n);
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        //for star
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;

    }
}

void pattern20(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout << endl;
    }
}

void pattern21(int n){
    for(int i=0; i<(2*n-1); i++){
        for(int j=0; j<(2*n-1); j++){
            int top = i;
            int left = j;
            int bottom = (2*(n-1))-i;
            int right = (2*(n-1))-j;
            cout << (n-(min(min(top,bottom), min(left, right))));
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        pattern21(n);
    }
    return 0;
}
