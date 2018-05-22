// Project Euler - Problem 1
// Dana Conard
// May 20 2018

/*PROMPT*********************************************
*  Find the sum of all the multiples of 3 or 5
*     below 1000.
*****************************************************/

#include <iostream>

using namespace std;

int main(){
    int total = 0;
    for (int i = 3; i < 1000; i++){
	if (i % 3 == 0 || i % 5 == 0)
            total += i;
    } // end-for
    cout << "The sum is: " << total << endl;
    return 0;
}
