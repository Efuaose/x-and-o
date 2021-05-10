#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(void)
{
    int hat[7], k, valStore[7];
    //Loop to store the cards in a hat
    for(short ind = 0; ind<7; ++ind) {
        k = pow(2,ind);
        hat[ind] = k;
        valStore[ind] = k;
    }
    int key = 0, select, sum = 0;
    cout << "Select any random card (1-7): ";
    cin >> key;
    switch(key) {
    case 1:
        sum = hat[0];
        break;
    case 2:
        sum = hat[1];
        break;
    case 3:
        sum = hat[2];
        break;
    case 4:
        sum = hat[3];
        break;
    case 5:
        sum = hat[4];
        break;
    case 6:
        sum = hat[5];
        break;
    case 7:
        sum = hat[6];
        break;
    default:
        cout << "Invalid card number";
        return EXIT_FAILURE;
    }
    while(sum <= 124) {
        cout << "Select another card: ";
        cin >> key;
        sum = sum + hat[key];
        if(sum > 124) {
            cout << "\nSUM has exceeded 124!" << flush;
            break;
        }
    }
    cout << "\n(SUM = " << sum << ')';
    return 0;
}
