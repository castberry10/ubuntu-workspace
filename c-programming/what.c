#include <stdio.h>

int main(){ 
        int a[2][2] = {{11, 22}, {44, 55}};
        int i, sum = 0;
        int *p;
        p= a[0];
        for(i = 1; i<4; i++){
            sum += *(p + 1);

            printf("*(p + %d) : %d",i,  *(p + i));
        }
        printf("%d", sum);

        return 0;
}
