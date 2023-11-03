#include<iostream>
using namespace std;

int main()
{
 string word;
 cout << " enter word ";


  int n = word.length[];
    for (int i = 0; i < n/2; i++) {
        if (word[i] != word[n-i-1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
 ;
0;
}
