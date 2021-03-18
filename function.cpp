#include <iostream>
#include <cstdio>
using namespace std;

//FUNCION

int max_of_four(int a, int b, int c, int d){
    int vect[] = {a,b,c,d};
    int max = 0; // El valor maximo de una variable de tipo entero.
    for(int i=0 ; i<=3 ; i++ ){
        if(max<vect[i]){
            max = vect[i];
        }
        
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
