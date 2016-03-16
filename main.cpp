#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    long long N, num_combs=0, num_win_and_lost;
    cin >> N;
    num_combs = N * (N-1);
    num_win_and_lost = num_combs;
    vector <long long> cards(N, 0);
    vector <long long> repeats( pow ( 10. , 6) + 1 , 0);
    for ( long long i = 0 ; i < N; i++ )
    {
        cin >> cards[i];
        repeats[cards[i]]++;
    }
    for ( long long i = 1 ; i <= N; i++)
    {
        num_win_and_lost -= repeats[i] * (repeats[i] - 1);
    }
    cout << double(num_win_and_lost)/(num_combs*2) << " " << double(num_win_and_lost)/(num_combs*2);
    return a.exec();
}
