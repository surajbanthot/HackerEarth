// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/submissions/


#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        int temp = (n % 12);
        switch (temp)
        {
        case 0:
            cout << n - 11 << " WS \n";
            break;
        case 1:
            cout << n + 11 << " WS \n";
            break;
        case 2:
            cout << n + 9 << " MS \n";
            break;
        case 3:
            cout << n + 7 << " AS \n";
            break;
        case 4:
            cout << n + 5 << " AS \n";
            break;
        case 5:
            cout << n + 3 << " MS \n";
            break;
        case 6:
            cout << n + 1 << " WS \n";
            break;
        case 7:
            cout << n - 1 << " WS \n";
            break;
        case 8:
            cout << n - 3 << " MS \n";
            break;
        case 9: 
            cout << n - 5 << " AS \n";
            break;
        case 10:
            cout << n - 7 << " AS \n";
            break;
        case 11:
            cout << n - 9 << " MS \n";
            break;
        default:
            cout << "\n";
            break;
        }
    }

    return 0;
}


// commit check