#include <iostream>
using namespace std;
int main() {
    int n, gt_n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    for (int i=1; i <=n; i++) {
        gt_n *=i;
    }
    cout << "Giai thua cua " << n << " la: " << gt_n << endl;
    return 0;
}