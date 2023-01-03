#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int P;
    float K;
    float L;
    cin >> P;
    cin >> K;
    cin >> L;
    int s;
    L = L+(100*K);
    s = (L/P)*100;
    s = round(s);
    cout << s/100 << " " << s%100 << endl;
    return 0;
}
