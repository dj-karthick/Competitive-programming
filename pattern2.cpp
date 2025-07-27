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
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){

        int space = n-i;
        int star = 2*i-1;

        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int j=0; j<star; j++){
            cout << "*" ;
        }

        cout << endl;

        
    }
}

void pattern8(int n){
    for(int i=1; i<=n; i++){

        int star= 2*n-2*i+1;
        int space= i-1;

        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int j=0; j<star; j++){
            cout << "*";
        }

        cout << endl;
    }
}

void pattern9(int n){
    for(int i=1; i<=n; i++){

        int space = n-i;
        int star = 2*i-1;

        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int j=0; j<star; j++){
            cout << "*" ;
        }

        cout << endl;    
    }

    for(int i=1; i<=n; i++){

        int star= 2*n-2*i+1;
        int space= i-1;

        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int j=0; j<star; j++){
            cout << "*";
        }

        cout << endl;
    }
}

void pattern10(int n){

    for(int i=1; i<=2*n-1; i++){

        int star=i;
        if(i>n) star = 2*n-i;
        for(int j=1; j<=star; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){

    for(int i=0; i<n; i++){
        int start =1;
        if (i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++ ){
            cout << start << " ";
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12(int n){

    for(int i=1; i<=n; i++){
        
        int number = i;
        int space = 2*n-2*i;

        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1; j<=space; j++ ){
            cout << " "; 
        }
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n){
    int number = 1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout << number << " ";
            number = number + 1;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=n-1; i>=0; i--){
        for(char ch= 'A'; ch<='A'+i; ch++ ){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
            cout << ch << " ";
        }
        ch = ch+1;
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
        int space = n-i;
        int star = 2*i-1;
        char ch = 'A';
        int breakPoint = (2*i-1)/2;

        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<=star; j++){
            cout << ch;
            if (j <= breakPoint) ch++; 
            else ch--;
        }
        cout << endl;

    }
}

void pattern18(int n){

    for(int i=0; i<n; i++){
        char ch = 'E';
        ch = ch - i;
        for(int j=0; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        int star = n-i;
        int space = 2*i;

        for(int j=0; j<star; j++){
            cout << "*";
        }
        for(int j=0; j<space; j++){
            cout << " ";
        }
        for(int j=0; j<star; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        int space = 2*n-2*i;
        int star = i;

        for(int j=1; j<=star; j++){
            cout << "*";
        }
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<=star; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void pattern20(int n){
    for(int i=1; i<=2*n-1; i++){

        int star, space;
        if(i<=n){
            star=i; 
            space = 2*n-2*i;
        }
        else{
            star= 2*n-i; 
            space=2*(i-n);
        }

        for(int j=1; j<=star; j++){
            cout << "*";
        }
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<=star; j++){
            cout << "*";
        }

        cout << endl;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i == n-1 || j == n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int bottom = (2*n-2) - i;
            int right = (2*n-2) - j;
            int minDistance = min(min(top, bottom), min(left, right));
            int result = n - minDistance;
            cout << result << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern22(4);
    return 0;
}