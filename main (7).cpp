/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include<iostream>
    using namespace std;
    
    int main( )
    {
        int n;
        cin>>n;
        int row=1;
        
        
        while(row<=n){
            int col = 1;
            int a = row;
            while(col<=row){
                cout<< a;
                a = a+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
        
    }