#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    const char *vect[]={"one","two","three","four","five","six","seven","eight","nine"};
   
    for (int i=0;i<=8;i++){
        if (n==i+1){
            printf("%s",vect[i]);
        }
        
    }
    if (n>9){
            printf("Greater than 9");
        }
       
    return 0;
}
