#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int N, num_loses=0, num_wins=0, num_ties=0;
    cin >> N;
    vector <int> cards(N, 0);
    for ( int i = 0 ; i < N; i++ )
    {
        cin >> cards[i];
    }
    for ( int i = 0 ; i < N; i++ )
    {
        int first_card = cards[i];
        for ( int k = 0 ; k < N ; k++ )
        {
            if(k!=i)
            {
                if( first_card < cards[k] )
                {
                    num_loses++;
                }
                else if( first_card > cards[k] )
                {
                    num_wins++;
                }
                else
                {
                    num_ties++;
                }
            }
        }
    }
    cout << (double(num_wins)/(num_wins+num_loses+num_ties)) << " " << (double(num_loses)/(num_wins+num_loses+num_ties));
    return a.exec();
}
