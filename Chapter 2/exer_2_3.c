/*
 * 2-3. Here’s an especially tricky one:
 * #            #        // 1,14
 *  ##        ##         // 2,3,12,13
 *   ###    ###          // 3,4,5,10,11,12
 *    ########           // 4-11
 *    ########           // 4-11
 *   ###    ###          // 3,4,5,10,11,12
 *  ##        ##         // 2,3,12,13
 * #            #        // 1,14
*/

#include <iostream>

using namespace std;

int
main ()
{
    //row loop
    int end = 15;
    for (int row = 1; row <= 8; row++) {
        //first 4 rows loop
        if (row < 5) {
            //column loop
            for (int col = 1; col < 15; col++) {
                //left half starts hashmarks in descending diaganol
                //right half starts in ascending diaganol
                if (col == row || col == end - row) {
                    //each time print starts print is same count as row #
                    for (int hash = 0; hash < row; hash++) {
                        cout << "#";
                    }
                } else {
                    cout << " ";
                }
            }
            cout << endl;
            //contract endpoint 2 spaces each row
            end -= 2;
            //second 4 rows loop
        } else {
            //reset endpoint of rows to
            end += 3;
            //column loop
            for (int col = 1; col < 15; col++) {
                //left half starts hashmarks in ascending diaganol
                //right half starts in descending diaganol
                if (col == 9 - row || col == end - row) {
                    //each time print starts print is same count as 9 - row #
                    for (int hash = 0; hash < 9 - row; hash++) {
                        cout << "#";
                    }
                } else {
                    cout << " ";
                }
            }
            cout << endl;
            //expand endpoint by 1 space per row
            end += 1;
        }
    }

    return 0;
}
