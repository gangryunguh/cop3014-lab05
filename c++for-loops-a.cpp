//
// Loop exercises from www.w3resource.com
//   - solution: prepared by Gang-Ryung
//   - TODO: error checking
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /* prob1:
       Write a program to find the first 10 natural numbers.
       Sample output:
       The natural numbers are:
       1 2 3 4 5 6 7 8 9 10
     */
    cout << "The natural numbers are:\n";
    for (int i = 0; i < 10; i++)
        cout << i+1 << " ";
    cout << '\b' << endl << endl;


    /* prob2:
       Write a program to find the sum of first 10 natural numbers.
       The natural numbers are:
       1 2 3 4 5 6 7 8 9 10
       The sum of first 10 natural numbers: 55
     */
    cout << "The natural numbers are:\n";
    cout << "1 2 3 4 5 6 7 8 9 10\n";
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum = sum + i;
    cout << "The sum of first 10 natural numbers: " << sum << endl << endl;


    /* prob3:
       Write a program to display n terms of natural number and their sum.
       Sample Output:
       Input a number of terms: 7
       The natural numbers upto 7th terms are:
       1 2 3 4 5 6 7
       The sum of the natural numbers is: 28
     */
    cout << "Input a number of terms: " << flush;
    int terms;
    cin >> terms;
    cout << "The natural numbers upto " << terms << "th terms are: " << endl;
    sum = 0;
    for (int i = 1; i <= terms; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << "The sum of the natural numbers: " << sum << endl << endl;


    /* prob4:
       Write a program to check whether a number is prime or not
       Sample Output:
       Input a number to check prime or not: 13
       The entered number is a prime number.
     */
    int pnum;
    cout << "Input a number to check prime or not: " << flush;
    cin >> pnum;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(pnum); i++) {
        if (pnum % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << "The entered number is " << (isPrime ? "a prime number" : "not a prime numbere") << endl << endl;



    /* prob5:
       Write a program to find prime number within a range
       Input number for starting range: 1
       Input number for ending range: 100
       The prime numbers between 1 and 100 are:
       2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
       The total number of prime numbers between 1 to 100 is: 25
     */
    int s_, e_;
    cout << "Input number for starting range: " << flush;
    cin >> s_;
    cout << "Input number for ending range: " << flush;
    cin >> e_;
    cout << "The prime numbers between " << s_ << " and " << e_ << " are: " << flush;

    int numPrime = 0;
    for (int i = max(2,s_); i <= e_; i++) {
        // first we need to check whether i is prime or not
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            numPrime++;
        }
    }
    cout << endl;
    cout << "The total number of prime numbers between " << s_ << " and " << e_ << " is: " << numPrime << endl << endl;


    /* prob6:
       Write a program to find the factorial of a number
       Sample output:
       Input a number to find the factorial: 5
       The factorial of the given number is: 120
     */
    int fact;
    cout << "Input a number to find the factorial: " << flush;
    cin >> fact;
    for (int i = fact-1; i > 1; i--) {
        fact *= i;
    }
    cout << "The factorial of the given number is: " << fact << endl << endl;


    /* prob7:
       Write a program to find the last prime number occur before the entered number.
       Sample output:
       Input a number to find the last prime number occurs before the number: 50
       47 is the last prime number before 50
     */
    int origPrime, lastPrime;
    cout << "Input a number the last prime number occurs before the number: " << flush;
    cin >> origPrime;
    for (int i = origPrime; i > 2; i--) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            lastPrime = i;
            break;
        }

    }
    cout << lastPrime << "is the last prime before " << origPrime << endl << endl;



    /* prob8:
       Write a program to find the Greatest Common Divisor (GCD) of two numbers.
       Sample Output:
       Input the first number: 25
       Input the second number: 15
       The Greatest Common Divisor is: 5
     */
    int fNum, sNum;
    cout << "Input the first number: " << flush;
    cin >> fNum;
    cout << "Input the second number: " << flush;
    cin >> sNum;
    int small = min(fNum, sNum);
    int large = max(fNum, sNum);

    while ( small != 0) {
        int temp = small;
        small = large % temp;
        large = temp;
    }
    cout << "The Greatest Common Divisor is: " << large << endl;


    /* prob9:
       Write a program to find the sum of digits of a given number.
       Sample Output:
       Input a number: 1234
       The sum of digits of 1234 is: 10
     */
    int digits, origDigits;
    cout << "Input a number: " << flush;
    cin >> origDigits;
    digits = origDigits;
    int digitSum = 0;
    do {
        digitSum = digitSum + digits % 10;
        digits = digits / 10;
    } while (digits != 0);
    cout << "The sum of digits of " << digits << " is: " << digitSum << endl << endl;


    /* prob10:
       Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
       Sample Output:
       Input the value for nth term: 5
       1/1^1 = 1
       1/2^2 = 0.25
       1/3^3 = 0.037037
       1/4^4 = 0.00390625
       1/5^5 = 0.00032
       The sum of the above series is: 1.29126
     */
    cout << "Input the value for nth term: " << flush;
    int nth;
    cin >> nth;
    double series = 0;
    for (int i=1; i <= nth; i++) {
        double term = 1.0/pow(i,i);
        cout << i << "/" << i << "^" << i << "=" << term << endl;
        series += term;
    }
    cout << "The sum of the above series is : " << series << endl << endl;

    return 0;
}