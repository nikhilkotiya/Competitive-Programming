#include <iostream>
using namespace std;
int main() {
    int a[10];
    a[0]=5;
    a[1]=10;

    cout<<a<<" " << &a<<" "<<&a[0]<<endl;
    cout<<a<<" "<< a+1<<" "<<*a<<" "<<*(a+1);
}
