#include <iostream>+
#include <vector>

using namespace std;

int main()
{
    int c;
    cin >> c;
    int filler;
    vector <int> a;
    for (int i=0; i<c; i++){
        cin >> filler;
        a.push_back(filler);
    }
    for (int i=0; i<c-2; i++){
        if (a[i]+a[i+1]==100){
            cout << a[i] << endl;
            cout << a[i+1] << endl;
            return 0;
        }
        else if (a[i]+a[i+1]+a[i+2]==100){
            cout << a[i] << endl;
            cout << a[i+1] << endl;
            cout << a[i+2] << endl;
            return 0;
        }
    }
    if (a[c-2]+a[c-1]==100){
        cout << a[c-2] << endl;
        cout << a[c-1] << endl;
    }
    return 0;
}
