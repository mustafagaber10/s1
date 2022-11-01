#include <iostream>
using namespace std;

void main()
{
    int j, l;

    cout <<"Enter number of rows: ";
    cin >> l;

    for(int i = 1, k = 0; i <= l; ++i, k = 0)
    {
        for(j = 1; j <= l-i; ++j)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
		
    }  
	system("pause");
}
