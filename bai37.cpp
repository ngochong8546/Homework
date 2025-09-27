#include <iostream>
using namespace std;
int main() {
    int n=0;
    for ( int i=1; i<=100; i++) {
        n = n + i*i;
    }
    cout << "Tong binh phuong tu 1 den 100 la: " << n << endl;
    return 0;
}