#include <stdio.h>
#include <cs50.h>

int main(void){
    int n;
    do{
        n = get_int("Height: ");

        if((n>8) || (n<1))
            continue;

        for (int i = 0; i<n; i++){
            //Spaces
            for (int j = 1; j < n-i ;j++){
                printf(" ");
            }
            //Right block
            for (int k = 0; k <= i; k++){
                printf("#");
            }
            //Gap
            printf("  ");
            // Left block
            for (int k = 0; k <= i; k++){
                printf("#");
            }
            // New line
            printf("\n");
        }

    }while((n>8) || (n<1));
    // other than 1-8 not pass
    // not getting pass string
    return 0;
}
