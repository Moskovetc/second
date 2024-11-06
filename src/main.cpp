#include <iostream>

using namespace std;

void swap(int* p, int* q);
void swap(int& p, int& q);

int main() {
    int i = 9;
    int j = 15;
    swap(&i, &j);
    swap(i, j);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
}

void swap(int* p, int* q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void swap(int& p, int& q)
{
    int t = p;
    p = q;
    q = t;
}

