/*
 *   Exercise 2-2.
 *   Or how about:
 *      ##
 *     ####
 *    ######
 *   ########
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
    for (int row = 1; row <= 8; row++) {
        //WS loop - iteration evaluates against row against target for first and second halves
        
        for (int spaceNum = 0; spaceNum < ((row < 5) ? 4 - row : row - 5); spaceNum++) {
            cout << " ";
        }
        //hashmark loop - iteration evaluates against row against target for first and second halves
        for (int hashNum = 0; hashNum < ((row < 5) ? row * 2 : (9 - row) * 2); hashNum++) {
            cout << "#";
        }
        cout << "\n";
    }

    return 0;
}