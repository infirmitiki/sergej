#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    if (s<6){
        cout << "N" << endl;
        cout << "N" << endl;
    }
    else if (s<11){
        cout << "D" << endl;
        cout << "D" << endl;
    }
    else if (s==11){
        cout << "N" << endl;
        cout << "N" << endl;
    }
    else if (s<17){
        cout << "N" << endl;
        cout << "R" << endl;
    }
    else if (s==17){
        cout << "N" << endl;
        cout << "N" << endl;
    }
    else if (s<22){
        cout << "N" << endl;
        cout << "V" << endl;
    }
    else{
        cout << "N" << endl;
        cout << "N" << endl;
    }
    return 0;
}
