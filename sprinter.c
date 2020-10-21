#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int n;

    printf("Observations: ");
    scanf("%d", &n);


    float times[n];
    float dist[n];

    for (int i = 0; i < n; i++) {

        printf("Time Distance: ");
        scanf("%f %f", &times[i], &dist[i]);
    }

    float speed = 0;
    float tmp;

    for (int i = 0; i < n - 1; i++) {
        tmp = fabs((dist[i + 1] - dist[i]) / (times[i + 1] - times[i]));

        if (tmp > speed) {
            speed = tmp;
        }
    }

    printf("%f\n", speed);
}