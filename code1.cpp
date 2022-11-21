#include <iostream>
using namespace std;

int main()
{
    long decimal;
    long ans=0,rem=1;
    cin >> decimal;
    
    while(decimal>0){
        ans += decimal % 3 * rem;
        decimal=decimal/3;
        rem=rem*10;
    }
    cout << ans;
}
