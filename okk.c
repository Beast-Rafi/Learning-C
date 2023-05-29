#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("Type the number of lenght: ");
    scanf("%d", &n);
    int x;
    int y;
    int array[n];
    array[0] = 0;
    array[1] = 1;
    int i;
    for(i = 2; i < n; i++) {
        array[i] = (array[x] + array[y]);
        x++;
        y++;
    }
    int z;
    for (z = 0; i < sizeof(array); i++)
    {
        printf("%d" , array[z]);
    }
    
    
    return 0;
}