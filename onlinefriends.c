#include<stdio.h>

int main() {
    struct friends {
        int tid;
        int relation;
        int isOnline;
    };
    struct query { 
        int operation;
        int friendId;
    };
    int n, k, q; // no of friends , max no of displayed online friends, number of queries respectively
    int i, j, m ; // Array indices
    int count = 0;
    int min = 0, minindex = 0;
    scanf("%d %d %d", &n, &k, &q);
    struct friends friendslist[n];
    struct query queries[q];
    for (i = 1; i <= n; i++ )  {
        scanf("%d", &friendslist[i].relation);
        friendslist[i].isOnline = 0;
    }
    for (i = 1; i <= q; i++) {
        scanf("%d ", &queries[i].operation);
        scanf("%d", &queries[i].friendId);
    }    
    for (i = 1; i <= q; i++) {
        switch (queries[i].operation) {
            case 1:
                if (count < k) {
                    friendslist[queries[i].friendId].isOnline = 1;
                    count++;
                } else {
                    min = 2147483647;
                    for (j = 1; j <= n; j++) {
                        if (friendslist[j].isOnline != 1) {
                            continue;
                        }
                        if (friendslist[j].relation < min) {
                            min = friendslist[j].relation;
                            minindex = j;
                        }
                    }
                    if (friendslist[queries[i].friendId].relation  > friendslist[minindex].relation) {
                        friendslist[queries[i].friendId].isOnline = 1;
                        friendslist[minindex].isOnline = 0;
                    } else {
                        friendslist[queries[i].friendId].isOnline = 0;
                        friendslist[minindex].isOnline = 1;
                   }    

                }
                break;
            case 2:
                printf("\n");
                if (friendslist[queries[i].friendId].isOnline == 1)
                    printf("YES");
                else
                    printf("NO");
                break;
        }
    }
}



