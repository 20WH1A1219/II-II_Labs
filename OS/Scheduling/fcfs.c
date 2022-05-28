#include<stdio.h>
int main(){
    int bt[5] ={5,8,12};
    int p[5] = {1,2,3},wt[3],tat[3];
    int total_tat =0,total_wt =0;    
    for(int i=0;i<3;i++){
        wt[0] =0;
        wt[i] = bt[i-1] + wt[i-1];
        //printf("          %d",wt[i]);   
    }
    for(int i=0;i<3;i++){
        //tat[0]=0;
        tat[i] = wt[i] + bt[i];
        //printf("               %d",tat[i]);
    }
    for(int i=0;i<3;i++){
                total_wt += wt[i];
                total_tat += tat[i];
                printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    int avg_wt = (float)total_wt/ (float)3;
    int avg_tat = (float)total_tat/ (float)3;            
    printf("\nAverage wait time is %d\n",avg_wt);
    printf("Average turnaround time is %d\n",avg_tat);

return 0;
}
