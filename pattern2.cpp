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
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }

        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        cout << endl;

    }
}  

void pattern8(int n){
    for(int i=1; i<=n; i++){

        for(int j=1; j<i; j++){
            cout << " ";
        }

        for(int j=1; j<=2*n-2*i-1+2; j++){
            cout << "*";
        }

        for(int j=1; j<i; j++){
            cout << " ";
        }

        cout << endl;

    }
}  

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}  

void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){

        int stars =i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }

        cout << endl;

    }
}  

void pattern11(int n){
    for(int i=1; i<=n; i++){

        int start = 1;
        if(i%2==0) start =0; else start = 1;
        for(int j=1; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;

    }
} 

void pattern12(int n){
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout << j;
            
        }

        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }

        for(int j=i; j>=1; j--){
            cout << j;
        }

        cout << endl;

    }
}  

void pattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){

            cout << num << " ";
            num++;
        }
        cout << endl;

    }
}  

void pattern14(int n){
    
    for(int i=1; i<=n; i++){

        char alpha='A';
        for(int j=1; j<=i; j++){

            cout << alpha << " ";
            alpha++;
        }
        cout << endl;

    }
}  

void pattern15(int n){
    
    for(int i=n; i>=1; i--){

        char alpha='A';
        for(int j=1; j<=i; j++){

            cout << alpha << " ";
            alpha++;
        }
        cout << endl;

    }
} 

void pattern16(int n){
    
    char alpha='A';
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){

            cout << alpha << " ";
        }
        cout << endl;
        alpha++;

    }
}  

void pattern17(int n){

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        char alpha = 'A';
        int breakPoint = (2*i-1) / 2;
        for(int j=1; j<=2*i-1; j++){    
            cout << alpha;
            if(j<=breakPoint) alpha++; else alpha--;
        }

        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        cout << endl;

    }
}  

void pattern18(int n){

    char alpha = 'E';
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){    //for(char ch = 'E' - i; ch <= 'E'; ch++){   (i must be 0)
            cout << alpha << " ";   //     cout << ch << " ";
            alpha++;                // }
        }
        cout << endl;
        alpha = alpha-i-1;
    }
} 

void pattern19A(int n){
    for(int i=0; i<n; i++){

        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        for(int j=0; j<2*i; j++){
            cout << " ";
        }

        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        cout << endl;

    }
}  

void pattern19B(int n){
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout << "*";
        }

        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }

        for(int j=1; j<=i; j++){
            cout << "*";
        }

        cout << endl;

    }
}

void pattern20(int n){
    
    for(int i=1; i<=2*n-1; i++){
        int star,space;
        if (i>n) star = 2*n-i; else star = i;
        if(i>n) space = 2*(i-n); else space = 2*(n-i);
        
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
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==1 || i==n) cout << "*"; else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int down = (2*n-2) - i;
            int right = (2*n-2) - j;
            cout << n - ( min(min(top,down), min(right, left)));
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        pattern22(n);
    }
    return 0;
}
