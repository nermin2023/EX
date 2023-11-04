#include <iostream>

using namespace std;

int main()
{
    int num [4];
    for ( int x = 0 ;x < 4 ; x++){

        cout << " enter your number \n ";
        cin >> num [x];

    }
    for (int x = 0; x < 4; x++)
    {
        if (num[x] == 1 || num[x] == 3 || num[x] == 9)
        {
            cout << " yes" << endl;

        }
        else {

            cout << " No " << endl;
        }
    }

    return 0;
}
