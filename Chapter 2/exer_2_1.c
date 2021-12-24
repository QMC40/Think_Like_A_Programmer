*
*   Exercise 2-1
*
*   Using only single-character output statements that output a hash mark,
*   a space, or an end-of-line symbol, write a program that outputs the
*   following shape:
*
*   ########
*    ######
*     ####
*      ##
*/

#include <iostream>

using namespace std;

int
main() {
    //row loop
    for (int i = 0; i < 4; i++) {
        //column loop
        for (int j = 0; j < 8 - i; j++) {
            //ternary: if col < row number print WS, else print '#'
            cout << ((j < i) ? " " : "#");
        }
        cout << endl;
    }
    return 0;
}