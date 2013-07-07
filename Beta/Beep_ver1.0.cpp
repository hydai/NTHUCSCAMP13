#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define Last_time 400

const int f[] = {261, 294, 330, 349, 392, 440, 494, 523, 587, 659, 699, 784, 880, 988, 1047, 1175, 1319, 1397, 1568, 1760, 1976};
const char to_map[] = "zxcvbnmasdfghjqwertyu";
int map[256];
void init();
int main()
{
    char tmp_in;
    int i;
    init();

    while (tmp_in = getch())
    {
        if (tmp_in == ' ')continue;
        Beep(f[map[tmp_in]], Last_time);
    }

    return 0;
}
void init()
{
    int i;
    for (i = 0; i < 21;i++)
    {
        map[to_map[i]] = i;
    }
}
