#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Number of problems in the contest:";
    cin >> n;
    int count = 0;

    while (n--)
    {

        int a, b, c;
        cin >> a >> b >> c;

       

        if (a+b+c >= 2)
        {

            count++;
        }
    }
    cout<<count;
    return 0;
}