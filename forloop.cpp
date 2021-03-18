#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    // Complete the code.
    int a,b;
    char const *vect[] = { "one","two","three","four","five","six","seven","eight","nine"};
    
    
    
    scanf("%d \n %d",&a,&b);
    
    
    for(int i=a;i <= b;i++) {
        if(i<=9){
            printf("%s \n", vect[i-1]);
        }
        else if(i>9){
            if ( i % 2 == 0 ){
                
                printf("%s \n", "even");
            }
                
            else{
                printf("%s \n", "odd" ); 
            }
                
        }
        
    }
    return 0;
}
