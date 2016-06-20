#include<stdio.h>

int main() {
   int n, htogcount = 0, i, j;//Number of teams participating in the championship
   struct uniform {
    int host;
    int guest;
   };
   scanf("%d", &n);
   struct uniform teams[n];
   for (i = 0; i < n; i++) {
        scanf("%d", &teams[i].host);
        scanf("%d", &teams[i].guest);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j <= n; j = (j + 1) % n) {
            if(j == n)
                j = j % n;
            if (i == j)
                break;
            if(teams[i].host == teams[j].guest) {
                htogcount++;
            }


        }
    }
    printf("%d", htogcount);
}
