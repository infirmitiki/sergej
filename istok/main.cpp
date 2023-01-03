#include <iostream>

using namespace std;

int main()
{
    char A;
    cin >> A;
    int B;
    cin >> B;
    if (A=='I'){
        if (B==0){
            cout << "S" << endl;
        }
        else if (B==1){
            cout << "J" << endl;
        }
        else{
            cout << "Z" << endl;
        }
    }
    else if (A=='J'){
        if (B==0){
            cout << "I" << endl;
        }
        else if (B==1){
            cout << "Z" << endl;
        }
        else{
            cout << "S" << endl;
        }
    }
    else if (A=='S'){
        if (B==0){
            cout << "Z" << endl;
        }
        else if (B==1){
            cout << "I" << endl;
        }
        else{
            cout << "J" << endl;
        }
    }
    else{
        if (B==0){
            cout << "J" << endl;
        }
        else if (B==1){
            cout << "S" << endl;
        }
        else{
            cout << "I" << endl;
        }
    }
    return 0;
}
