#include<stdio.h>

int main() {
    int n, carcount = 0, temp;
    scanf("%d", &n);
    int i, j, sum = 0;
    struct group {
        int no_of_students;
        int oncarstatus;
    };
    struct group studgroup[n];
    for (i = 1; i <= n; i++) {
        scanf("%d", &studgroup[i].no_of_students);
        studgroup[i].oncarstatus = 0;
    }
    /*for (i = 1; i <= n - 1; i++) {
        for (j = i + 1; j <= n; j++) {
            if (studgroup[j].no_of_students > studgroup[i].no_of_students) {
                temp = studgroup[i].no_of_students;
                studgroup[i].no_of_students = studgroup[j].no_of_students;
                studgroup[j].no_of_students = temp;
            }
        }  
    }*/
    for (i = 1; i <= n; i++) {
        if (studgroup[i].oncarstatus == 1) 
           continue;
        if (studgroup[i].no_of_students == 4) {
            studgroup[i].oncarstatus = 1;
            carcount++;
            continue;
        } else {
            sum = studgroup[i].no_of_students;
            studgroup[i].oncarstatus = 1;
            for (j = i + 1; j <= n; j++) {
                if (studgroup[j].oncarstatus == 1 )
                    continue;
                sum = sum + studgroup[j].no_of_students;
                if (sum < 4) {
                    studgroup[j].oncarstatus = 1;
                    continue;
                } else if (sum == 4) {
                    studgroup[j].oncarstatus = 1;
                    break;
                } else {
                    sum = sum - studgroup[j].no_of_students;
                    continue;
                }
            }

        }
        carcount++;
    }
    printf("%d", carcount);    
}