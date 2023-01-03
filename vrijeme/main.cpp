#include <bits/stdc++.h>

using namespace std;

bool iszero (string word, int place){
    if (word[place-1]=='0'){
        return true;
    }
    return false;
}

int main()
{
    string a;
    cin >> a;
    int A = stoi(a);
    string ai = "" ;
    ai += a[0];

    if (A>2359){
        cout << "TLE" << endl;
    }
    else if(iszero(a,1)==true&&a!="0"){
        cout << "TLE" << endl;
    }
    else if(a.length()==4){
        if (iszero(a,3)==true){
            cout << "TLE" << endl;
            return 0;
        }
        string aii = "";
        aii += a[1];
        string aiii = "";
        aiii += a[2];
        string aiv = "";
        aiv += a[3];
        if(stoi(ai+aii)<24&&stoi(aiii+aiv)<60){
            cout << ai+aii+":"+aiii+aiv;
        }
        else{
            cout << "TLE" << endl;
        }
    }
    else if(a.length()==1){
        if (a!="0"){
            cout << "0:" + a << endl;
            cout << a + ":0" << endl;
        }
        else{
            cout << "0:0" << endl;
        }
    }
    else if (a.length()==2){
        string aii = "";
        aii += a[1];
        cout << ai + ":" + aii << endl;
        if (A<24){
            cout << a + ":0" << endl;
        }
        if (A<60){
            cout << "0:" + a << endl;
        }
    }
    else if (a.length()==3){
        string aii = "";
        aii += a[1];
        string aiii = "";
        aiii += a[2];
        if(stoi(aii)>5&&stoi(ai)>1){
            cout << "TLE" << endl;
        }
        else if(stoi(ai+aii)<24){
            cout << ai+aii+":"+aiii << endl;
        }
        if (stoi(aii)<6&&stoi(aii)>0){
            cout << ai+":"+aii+aiii;
        }
    }
    return 0;
}
