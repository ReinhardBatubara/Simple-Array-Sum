#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int total = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
        total = total + x[i];
    }
    printf("%d", total);
    return 0;
}
