#include <bits/stdc++.h>

using namespace std;

int main()
{
    int P;
    int N;
    int K;
    int S;
    int caunt = 0;
    cin >> P >> N >> S >> K;
    int save = P;
    vector <int> L;
    int lfill;
    for (int i=0; i<K; i++){
        cin >> lfill;
        L.push_back(lfill);
    }
    while(P<N){
        P+=S;
        for (int i=0; i<K; i++){
            if (P==L[i]){
                caunt++;
            }
        }
    }
    cout << caunt << endl;
    S = 2;
    P = save;
    caunt = 0;
    bool notfound = true;
    while (notfound){
        while(P<N){
        P+=S;
        for (int i=0; i<K; i++){
            if (P==L[i]){
                caunt++;
            }
        }
    }
    if (caunt==0){
        notfound = false;
    }
    caunt = 0;
    P = save;
    S++;
    }
    cout << S-1 << endl;
    return 0;
}
