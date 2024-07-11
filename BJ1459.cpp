#include <iostream>
using namespace std;

int main() {
    long long desX, desY;
    cin >> desX;
    cin >> desY;

    int block;
    int diagonal;
    cin >> block;
    cin >> diagonal;

    long long time = 0;

    if(block*2<=diagonal) {
        time = (desX+desY) * block;
    } else if(block > diagonal) {
        if(desX>=desY){
            time = desY*diagonal + (desX-desY)/2*(diagonal*2) + (desX-desY)%2*block;
        } else {
            time = desX*diagonal + (desY-desX)/2*(diagonal*2) + (desY-desX)%2*block;
        }
    } else {
        if(desX>=desY){
            time = desY*diagonal + (desX-desY)*block;
        } else {
            time = desX*diagonal + (desY-desX)*block;
        }
    }

    cout << time;

    return 0;
}