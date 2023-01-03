#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A;
    int B;
    cin >> A >> B;
    vector <int> c;
    c.push_back (A);
    c.push_back (B);
    sort (begin(c),end(c));
    A = c[0];
    B = c[1];
    if (B-A==7){
        cout << 20 << endl;
    }
    else if(B-A==1){
        if(B>7){
            cout << 30 << endl;
        }
        else if (B<8){
            cout << 10 << endl;
        }
    }
    else if(B-A==6){
        if (B!=7){
            cout << 30 << endl;
        }
        else{
            cout << 10 << endl;
        }
    }
    else if (B-A==2){
        if (A>7){
            cout << 60 << endl;
        }
        else if(B<8){
            cout << 20 << endl;
        }
        else{
            cout << 40 << endl;
        }
    }
    else if (B-A==5){
        if (A<3){
            cout << 20 << endl;
        }
        else if (B>12){
            cout << 60 << endl;
        }
        else{
            cout << 40 << endl;
        }
    }
    else{
        if(A>7){
            cout << 70 << endl;
        }
        else if (B<8){
            cout << 30 << endl;
        }
        else{
            cout << 50 << endl;
        }
    }

    return 0;
}
