#include<stdio.h>
#include<string.h>

int main()  {
    int i, j, len, n, flag; // Length of the string Andreid has
    char string[10]; // Actual string
    scanf("%d", &n);
    scanf("%s", string);
    len = strlen(string);
    
    while(1) {
        flag = 0;
        for (i = 0; i < n; i++) {
            if(string[i] == '1' && string[i+1] == '0' || string[i] == '0' && string[i+1] == '1') {
                flag = 1;
                string[i] = '-';
                string[i+1] = '-';
                len = len - 2;
                break;
                }
            if(string[i] == '1' && string[i+1] == '-' || string[i] == '0' && string[i+1] == '-') {
                for(j = i+1; j < n; j++) {
                    if(string[j] != '-')
                        break;
                }
                if(string[i] == '1' && string[j] == '0' ||string[i] == '0' && string[j] == '1' ) {
                    flag = 1;
                    string[i] = '-';
                    string[j] = '-';
                    len = len - 2;
                break;
                }

            }    
        }
        if (flag == 0)
            break;
    } 
    printf("%d", len);   
        

    
}
