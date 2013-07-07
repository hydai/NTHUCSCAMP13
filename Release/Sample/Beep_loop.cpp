#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    int i;
    cin >> i;
    while(i != 0) {
            if (i==1) {
                        Beep(523, 400);
                    }
            else if (i==2) {
                        Beep(587, 400);
                    }
            else if (i==3) {
                        Beep(659, 400);
                    }
            else if (i==4) {
                        Beep(699, 400);
                    }
            else if (i==5) {
                        Beep(784, 400);
                    }
            else if (i==6) {
                        Beep(880, 400);
                    }
            else if (i==7) {
                        Beep(988, 400);
                    }
            else if (i==8) {
                        Beep(1047, 400);
                    }
            cin >> i;
        }
    return 0;
}

/*
 * fequence:
 * Do :523
 * Re :587
 * Mi :659
 * Fa :699
 * So :784
 * La :880
 * Si :988
 * Do :1047
 * */

