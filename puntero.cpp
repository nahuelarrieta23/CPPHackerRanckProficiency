#include <stdio.h>


void update(int *a,int *b) {
    // Complete this function
    int a_passed = *a;   
    *a=(*a)+(*b);
    //Abs without math.h
    if((a_passed)-(*b)<0){
        *b=-((a_passed)-(*b));
    }else{
        *b=((a_passed)-(*b));
    }
    
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
