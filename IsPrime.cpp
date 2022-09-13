//finding prime number
#include <iostream> 
using namespace std;
const int MAX = 100;

int main() {
    int start_num = 3;
    int divider = 2;

    while (start_num <= MAX) {
        bool isprime = true;

        for (; divider < start_num; divider++) {

            if (start_num % divider == 0)
                isprime = false;
        }

        if (isprime)
            cout << start_num << endl;

        start_num++;
        divider = 2;
    }
}
