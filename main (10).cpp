/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

    #include<iostream>
    using namespace std;
    
    int main()
    {
        int n;
        cin>>n;
        
        int row = 1;
        while(row<=n){
            
            int col = 1;
            
            while(col<=n){
                char ch = 'A'+col-1;
                cout << ch;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
        
        
        
        
    }