#include<stdio.h>
#include<string.h>

int main() {
        int n, no_of_cashes = 1, i, j, eqcount = 1;
        scanf("%d", &n);
        struct customertime {
            int hours;
            int min;
            int status;
        };
        struct customertime custtime[n];
        for(i = 0; i < n; i++) {
            scanf("%d %d", &custtime[i].hours, &custtime[i].min);
            custtime[i].status = 0;
        }

        for(i = 0; i < n; i++) {
            if (custtime[i].status == 1)
                continue;
            else {
                for(j = i+1; j < n; j++) {
                    if (custtime[j].status == 1) continue;
                    else {
                        if (custtime[i].hours == custtime[j].hours && custtime[i].min == custtime[j].min) {
                            eqcount ++;
                            custtime[j].status = 1;
                        }
                    }
                            
                }
            }
            custtime[i].status = 1;
            if (no_of_cashes <= eqcount)
                no_of_cashes = eqcount;
            eqcount = 1;
        }
        printf("%d", no_of_cashes); 
}        