#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
#define SIZE 10

int main(){
  char *pa, *pb, temp;
    char a[SIZE];
    cout << "Input string: ";
    cin >> a;
    int len = strlen(a);
    pa = &a[0];
    pb = &a[len - 1];
    cout << "Original: ";
    for (int i = 0; i < len; i++, pa++) {
        cout << setw(3) << *pa;
    }
    cout << endl;
    pa = &a[0];
    for (int i = 0; i < len / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }
    pa = &a[0];
    cout << "Reverse: ";
    for (int i = 0; i < len; i++, pa++) {
        cout << *pa << " ";
    }
    cout << endl;
    return 0;
}
