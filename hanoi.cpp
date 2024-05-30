#include <iostream>
#include <iomanip>

using namespace std;

void hanoi(int n, char A, char B, char C);

int main()
{
    int n;
    cout << "Input the num.of Disks:";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char X, char Y, char Z)
{
    if (n == 1)
    {
        cout << n << ":" << X << "-->" << Z << endl;
        return;
    }
    hanoi(n - 1, X, Z, Y);
    cout << n << ":" << X << "-->" << Z << endl;
    hanoi(n - 1, Y, X, Z);
    return;
}