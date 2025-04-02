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

int noOfDigitCount(int n) {
 // int count = (int)log10(n)+1;  using logarithm of 10 + 1
    int count = 0;         
    while(n>0){
        int lastDigit = n % 10;
        cout << lastDigit << endl;       // using extraction method
        count = count + 1;
        n = n/10;
    }
    return count;
} 

int reverseTheNumber(int n){
    int reversedNumber = 0;
    int dup = n;
    while(n>0){
        int lastDigit = n % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;      
        n = n/10;
    }
    return reversedNumber;
}

int palindrome(int n){
    int reversedNumber = 0;
    int dup = n;
    while(n>0){
        int lastDigit = n % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;      
        n = n/10;
    }

    if (reversedNumber == dup) cout << "It is palindrome."; else cout << "It is not a palindrome.";
    return 0;
}

int armstrongNumber(int n){
    int dup = n;
    int sum = 0;
    while(n>0){
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if (dup == sum) cout << "It is Armstrong number."; else cout << "It is not a Armstrong number.";
    return 0;
}

int printAllDivisors(int n){
     for(int i=1; i<=n; i++){        //timeComplexity = O(N)
        if(n % i == 0){
            int divisor = i;
            cout << divisor << endl;    
        }
    }
}

int printAllDivisorsAnotherMethod(int n){
    vector<int>divisors;
    for(int i=1; i*i<=(n); i++){
        // 6 * 6 <= 36;
        // 7 * 7 <= 36; false
        // Tc = O(sqrt(n))
        if(n % i == 0){
            cout<< i << endl;
            divisors.emplace_back(i);
            if(n / i != i){
                cout << n/i << endl;
                divisors.emplace_back(n/i);
            }
        }
    }
    //Tc = O(n log n)  where n is the number of factors
    sort(divisors.begin(), divisors.end()); 
    // Tc = O(number of factors)
    for ( int i : divisors) cout << i << " ";
    return 0;
}

int primeNumber(int n){
     int count = 0;
     for (int i=1; i*i<=n; i++){     // Tc = O(sqrt(n))
        if(n%i == 0){
            count++;
            if(n/i != i) count++;
        }    
     }
     if(count == 2) cout << "It is a prime number."; else cout << "It is not a prime number.";
     return 0;
}

int gcd(int n1, int n2){
    int gcd = 1;                                 // Tc = O(min(n1, n2))
    for (int i=1; i<=min(n1, n2); i++){ 
        if(n1%i==0 && n2%i==0){
            gcd = i;
            cout << gcd << endl;
        }
    }
    cout << endl << gcd << endl;
    return 0;
}

int gcdAnotherMethod(int n1, int n2){
    int gcd = 1;
    for (int i = min(n1, n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){                //Tc = O(min(n1, n2))
            gcd = i;
            break;
        }
    }
    cout << gcd;
    return 0;
}

int gcdEquilateralMethod(int a, int b){
    while(a>0 && b>0){                     // If one of them is zero then loop stops.
        if(a>b) a= a%b; else b = b%a;      // It divides with modulo depends on which one is bigger.
    }
    if(a == 0) cout << "Gcd is : " << b; else cout << " Gcd is : " << a;  // After loop finishes If a is 0 then b is gcd and viceversa.
    return 0;      // Tc = O(log pie(min(a, b)))   Whenever division happens the iterations will be in logarithm.
}
    
int main (){
    int n1, n2;
    cin >> n1 >> n2;
    gcdEquilateralMethod(n1, n2);
   
    return 0;
}
