#include<stdio.h>

int main() {
    int n, k = 0, temp, flag = 0; // The number of balls limak can have
    scanf("%d", &n);
    int t[n], i, j;
    for(i = 1; i <= n; i++)
        scanf("%d", &t[i]);
    for(i = 1; i <=n-1; i++) {
        for(j = i + 1; j <= n; j++) {
            if(t[j] < t[i]) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    
    for(i = 1; i <= n - 2; i++) {
        j = i + 1;
        if(t[i] == t[j] && t[j] == t[j + 1] && t[i] == t[j + 1] || t[i] == t[j]) {
            continue;
        }
        if(t[j] == t[j + 1]) {
            k = j + 1;
            if (k == n)
                break;
            while(t[k] == t[j]) {
                j = k;
                k++;
            }
        }
        if( (abs(t[i] - t[j]) <= 2) && (abs(t[i] - t[j + 1]) <= 2) && (abs(t[j] - t[j+1]) <= 2) ) {
            flag = 1;
            printf("YES");
            break;
        }
    }
    if(flag == 0)
        printf("NO");

}