



#include<iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;


  int i = 1;
  char start = 'A';
  while (i <= n)
    {

      int j = 1;

      while (j <= n)
	{
	  char x = 'A' + i + j - 2;
	  cout << x << " ";

	  start = start + 1;
	  j = j + 1;
	}
      cout << endl;
      i = i + 1;
    }




}
