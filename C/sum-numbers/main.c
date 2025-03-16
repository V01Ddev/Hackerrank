#include <stdio.h>

int main(){
    int fd, sd;
    float ff, sf;

    scanf("%d %d\n %f %f", &fd, &sd, &ff, &sf);
    printf("%d %d\n%.1f %.1f", fd+sd, fd-sd, ff+sf, ff-sf);
    return 0;
}
