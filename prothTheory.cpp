#include <iostream>  
#include <bits/stdc++.h>
using namespace std; 
  
bool isPowerOfTwo(int n) 
{ 
    return (n && !(n & (n - 1))); 
}

bool isProthNumber(int n) 
{
    int k = 1; 
    while (k < (n / k)) { 
        // check if k divides n or not 
        if (n % k == 0) { 
            // Check if n/k is power of 2 or not 
            if (isPowerOfTwo(n / k))
                return true; 
        } 
        // update k to next odd number 
        k += 2; 
    } 
    return false; 
}

bool isProthPrime(int n) 
{
    for (int i = 2; i < n; i++){ 
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() 
{ 
    int num;
    cout << "Hello! Please enter a number: " << endl;
    cin >> num;
    
    //First check if number is Proth number
    if (isProthNumber(num - 1)){
        // Then check if number is Proth Prime
        if(isProthPrime(num)){
          cout << num << " is a Proth Prime!" << endl;
        } else {
          cout << num << " is a Proth number but not a Proth Prime!" << endl;
        }
    }
    else{
        cout << num << " is not a Proth number!" << endl; 
    }
    return 0; 
}