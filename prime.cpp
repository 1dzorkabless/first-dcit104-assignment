#include <iostream>

using namespace std;
int main() 
{
    // all integers which are going to be used
    // providednum is the number going to be input
    int num, a, providednum, sum = 0;

    // input end number of sum of prime numbers
    cout << "sum of prime numbers up to :";
    cin >> providednum;

    for(num = 2; num <= providednum; num++) {
        for(a = 2; a <= (num/2);a= a + 1) {
            while(num % a == 0) {
                a = num;
                 }
        }

        //summing of number when prime
        if(a != num) {
            sum += num;
        }
    }

    cout << endl << "sum of prime numbers up to" <<providednum<< "a" << sum;

    return 0;
}    
//code written by Dzorka Bless
//10946997

  


