#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double avr_r = 0;
    freopen("output.txt", "w", stdout);
    for (int i = 2; i < 10; i++) {
        avr_r = (50.0 + i * 4.2) / (i - 1);
        cout << i << " " << avr_r << endl;
    }
    avr_r = 22.2667;
    int y = 1;
    double kd = (1 + 0.1);
    double inv = 50 + 4.2 / kd;
    double ret = 0;
    while (ret < inv) {
        y++;
        kd *= (1 + 0.1);
        ret += (avr_r - 4.2) / kd;
        cout << inv - ret << endl;
    }
    cout << y - 1 + (1.75545 / ((avr_r - 4.2) / kd));
}
