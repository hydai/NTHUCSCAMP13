#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    int frequency, duration;

    cin >> frequency >> duration;
    Beep(frequency, duration);
    return 0;
}
