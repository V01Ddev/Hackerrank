#include <stdio.h>


int max(int a, int b){
    int g;
    if (a>b){
        g=a;
    }
    if (b>a){
        g=b;
    }
    return g;
}


int max_of_four(int a, int b, int c, int d) {
    int g;
    g = max(a, b);
    g = max(g, c);
    g = max(g, d);
    return g;
}


int main() {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
