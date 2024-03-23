#include "Stek.h"
#include <iostream>
using namespace std;
int main()
{
    Stek<int> arr = Stek<int>(5);
    arr.Push(3);
    arr.Push(2);
    arr.Push(1);
    arr.Push(5);
    cout << arr.Pop();
    cout << arr.Pop();
    cout << arr.Pop();
    cout << arr.Pop() << endl;

    Stek<char> arr1 = Stek<char>(5);
    arr1.Push('3');
    arr1.Push('e');
    arr1.Push('6');
    arr1.Push('h');

    cout << arr1.Pop() << endl;
    cout << arr1.Pop() << endl;
    cout << arr1.Pop() << endl;
    cout << arr1.Pop() << endl;
}