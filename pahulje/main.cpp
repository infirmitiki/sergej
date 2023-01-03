#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int N;
    int M;
    cin >> A >> B >> M >> N;
    for (int i=0; i<N; i++){
        M += A-B;
    }
    cout << M << endl;
    return 0;
}
