#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int _int;
    long _long;
    char _ch;
    float _float;
    double _double;
    //Reading
    scanf("%d %ld %c %f %lf", &_int, &_long , &_ch , &_float , &_double );
    //Printing
    printf("%d\n%ld\n%c\n%f\n%lf\n", _int, _long , _ch , _float , _double );
    
    return 0;
}
