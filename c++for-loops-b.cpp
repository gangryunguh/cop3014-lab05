//
// Loop exercises from www.w3resource.com
//    - solution: prepared by Gang-Ryung
//    - TODO: error checking
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    /* prob11:
       Write a program to calculate the sum of the series
       (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
       Sample Output:
       Input the value for nth term: 5
       1*1 = 1
       2*2 = 4
       3*3 = 9
       4*4 = 16
       5*5 = 25
       The sum of the above series is: 55
     */
    int prob11;
    cout << "Input the value for nth term: " << flush;
    cin >> prob11;
    int sum11 = 0;
    for (int i = 1; i <= prob11; i++) {
        sum11 += i*i;
    }
    cout << "The sum of the above series is: " << sum11 << endl;

    //------------------------

    /* prob12:
       Write a program to calculate the series
       (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
       Sample Output:
       Input the value for nth term: 5
       1 = 1
       1+2 = 3
       1+2+3 = 6
       1+2+3+4 = 10
       1+2+3+4+5 = 15
       The sum of the above series is: 35
     */
    int prob12;
    cout << "Input the value for nth term: " << flush;
    cin >> prob12;
    int sum12 = 0;
    for (int i = 1; i <= prob12; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            cout << j << "+" << flush;
            sum += j;
        }
        cout << '\b';
        cout << " = " << sum << endl;
        sum12 += sum;
    }
    cout << "The sum of the above series is: " << sum12 << endl;

    //------------------------

    /* prob13:
       Write a program to find the sum of series
       1 - X^2/2! + X^4/4!-.... upto nth term. Go to the editor
       Sample Output:
       Input the value of X: 3
       Input the value for nth term: 4
       term 1 value is: 1
       term 2 value is: -4.5
       term 3 value is: 3.375
       term 4 value is: -1.0125
       The sum of the above series is: -1.1375
     */
    int prob13x,prob13n;
    cout << "Input the value of X: " << flush;
    cin >> prob13x;
    cout << "Input the value of nth term: " << flush;
    cin >> prob13n;
    double sum13 = 1;
    double fact13 = 1;
    int sign13 = -1;
    double pow13 = prob13x;
    cout << "term 1 value is : 1" << endl;
    for (int i=2; i <= ((prob13n-1)<<1); i++) {
        fact13 *= i;
        pow13 *= prob13x;
        if (i % 2 == 0) {
            double term = sign13 * pow13 / fact13;
            cout << "term " << (i>>1)+1 << " value is : " << term << endl;
            sum13 += term;
            sign13 *= -1;
        }
    }
    cout << "The sum of the above series is: " << sum13 << endl;

    //------------------------

    /* prob14:
       Write a program to list non-prime numbers from 1 to an upperbound.
       Sample Output:
       Input the upper limit: 25
       The non-prime numbers are:
       4 6 8 9 10 12 14 15 16 18 20 21 22 24 25
     */
    int prob14;
    cout << "Input the upper limit: " << flush;
    cin >> prob14;
    cout << "\nThe non-prime numbers are: " << endl;
    for (int i = 4; i <= prob14; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime)
            cout << i << " ";
    }
    cout << '\b';
    cout << endl;

    //------------------------

    /* prob15:
       Write a program to print a square pattern with # character.
       Sample Output:
       Print a pattern like square with # character:
       --------------------------------------------------
       Input the number of characters for a side: 4
       # # # #
       # # # #
       # # # #
       # # # #
     */
    int prob15;
    cout << "Input the number characters for a side: " << flush;
    cin >> prob15;
    string s15(prob15, '#');
    for (int i = 0; i < prob15; i++)
        cout << s15 << endl;
    cout << endl;

    //------------------------

    /* prob16:
       Write a program to display the multiplication table vertically from 1 to n.
       Sample Output:
       Input the number upto: 5
       Multiplication table from 1 to 5
       1x1=1 2x1=2 3x1=3 4x1=4 5x1=5
       1x2=2 2x2=4 3x2=6 4x2=8 5x2=10
       1x3=3 2x3=6 3x3=9 4x3=12 5x3=15
       1x4=4 2x4=8 3x4=12 4x4=16 5x4=20
       1x5=5 2x5=10 3x5=15 4x5=20 5x5=25
       1x6=6 2x6=12 3x6=18 4x6=24 5x6=30
       1x7=7 2x7=14 3x7=21 4x7=28 5x7=35
       1x8=8 2x8=16 3x8=24 4x8=32 5x8=40
       1x9=9 2x9=18 3x9=27 4x9=36 5x9=45
       1x10=10 2x10=20 3x10=30 4x10=40 5x10=50
    */
    int prob16;
    cout << "Input the number upto: " << flush;
    cin >> prob16;
    cout << "Multiplication table from 1 to " << prob16 << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j=1; j <= prob16; j++) {
            cout << j << "x" << i << "=" << j*i << " " << flush;
        }
        cout << '\b' << endl;
    }

    //------------------------

    /* prob17:
       Write a program to display the n terms of odd natural number and their sum.
       Sample Output:
       Input number of terms: 5
       The odd numbers are: 1 3 5 7 9
       The Sum of odd Natural Numbers upto 5 terms: 25
     */
    int prob17,limit17;
    cout << "Input number of terms: " << flush;
    cin >> prob17;
    limit17 = prob17;
    cout << "The odd numbers are: " << flush;
    int sum17 = 0;
    for (int i = 1; prob17 ; i++) {
        if (i % 2) {
            cout << i << " ";
            sum17 += i;
            prob17--;
        }
    }
    cout << "\nThe Sum of odd Natural Numbers upto " << limit17 << "terms: " << sum17 << endl << endl;


    /* prob18:
       Write a program to display the n terms of even natural number and their sum.
       Sample Output:
       Input number of terms: 5
       The even numbers are: 2 4 6 8 10
       The Sum of even Natural Numbers upto 5 terms: 30
     */
    int prob18,limit18;
    cout << "Input number of terms: " << flush;
    cin >> prob18;
    limit18 = prob18;
    cout << "The odd numbers are: " << flush;
    int sum18 = 0;
    for (int i = 1; prob18 ; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum18 += i;
            prob18--;
        }
    }
    cout << "\nThe Sum of even Natural Numbers upto " << limit17 << "terms: " << sum18 << endl << endl;



    /* prob19:
       Write a program to display the n terms of harmonic series and their sum.
       1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
       Sample Output:
       Input number of terms: 5
       1/1 + 1/2 + 1/3 + 1/4 + 1/5
       The sum of the series upto 5 terms: 2.28333
     */
    int prob19;
    cout << "Input number of terms: " << flush;
    cin >> prob19;
    double sum19 = 0;
    for (int i = 1; i <= prob19; i++) {
        cout << "1/" << i << " + " << flush;
        sum19 += 1.0 / i;
    }
    cout << "\b\b\n";
    cout << "The sum of the series upto " << prob19 << " terms: " << sum19 ;


    /* prob20:
       Write a program to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
       Sample Output:
       Input number of terms: 5
       9 99 999 9999 99999
       The sum of the sarise = 111105
     */
    int prob20;
    cout << "Input number of terms: " << flush;
    cin >> prob20;
    int sum20 = 0;
    for (int i=1; i <= 5; i++) {
        string s20(i, '9');
        sum20 += atoi(s20.c_str());
    }
    cout << "The sum of the sarise = " << sum20 << endl << endl;


    /* prob21:
       Write a program to display up to i-th triangular numbers [ 1, 3, 6, 10, 15, 21, ... ].
       Sample Output:
       Input number of terms: 7
       1, 3, 6, 10, 15, 21, 28
     */
    int prob21;
    cout << "Input number of terms for triangular numbers: " << flush;
    cin >> prob21;

    int sum21 = 0;
    for (int i=1; i <= prob21; i++) {
        sum21 += i;
        cout << sum21 << "," ;
    }
    cout << '\b' << endl;

    return 0;

}