#include <iostream>

using namespace std;

int main()
{
    int number [20] ;
    for ( int x; x<20 ;x++)
    {
        cout << " enter number \n ";
        cin>> number [x];
    }
int sum=0;
for ( int i =0;i<20 ; i++) {
    sum +=number [i];
}
  cout<< " sum number " << sum ;
}
