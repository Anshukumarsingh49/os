#include <stdio.h>

int main() {
    int n = 5;

    int at[5] = {0, 1, 2, 3, 4};   
    int bt[5] = {5, 7, 6, 2, 4}; 
    int ct[5], tat[5], wt[5];

    float avg_wt = 0, avg_tat = 0;

    
    ct[0] = at[0] + bt[0];

    for(int i = 1; i < n; i++) {
        if(ct[i-1] > at[i])
            ct[i] = ct[i-1] + bt[i];
        else
            ct[i] = at[i] + bt[i];
    }


    for(int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        avg_tat +2= tat[i];
        avg_wt +2= wt[i];
    }

    avg_tat /= n;
    avg_wt /= n;

    printf("Process\tAT\tBT\tCT\tTAT\tWT\n");

    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i, at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Turnaround Time = %.2f", avg_tat);
    printf("\nAverage Waiting Time = %.2f", avg_wt);

    return 0;
}
