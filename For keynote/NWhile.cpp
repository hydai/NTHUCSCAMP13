#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int N, ans, i;
    cin >> N;
    while (N > 0) {
        ans = 0;
        i = 1;
        while (i <= N) {
            ans += i;
            i = i + 1;
        }
        cout << ans << endl;
        cin >> N;
    }
    return 0;
}
