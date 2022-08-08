/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  
  int i = 1;
  char ch = 'A';
  while(i<=n)
  {
    
    int j = 1;
    while(j<=i){
        
        char a = 'A'+i+j-2;
        cout << a;
        a=  a+1;
        j= j+1;
    }
    cout << endl;
    i = i+1;
  }
}  