/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Finished
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    float sales_report[12];
    float sales_sum = 0.0;
    float sales_avg = 0.0;
    float sales_max = 0.0;
    float sales_min = 0.0;
    
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"};
    
    FILE* sales_numbers = fopen("input1.txt", "r");
    
    if (!sales_numbers)
    {
        printf("Invalid File");
        exit(0);
        
    }
    
    sales_max = sales_report[0];
    sales_min = sales_report[0];
    for (int k = 1; k < 12; k = k + 1)
    {
        if (sales_max < sales_report[k])
        {
            sales_max = sales_report[k];
        }
        
        if (sales_min > sales_report[k])
        {
            sales_min = sales_report[k];
        }
        
    }
    
    for (int j = 0; j < 12; j = j + 1)
    {
        sales_sum = sales_sum + sales_report[j];
    }
    sales_avg = sales_sum / 12;
    
    
    int max_index = -1;
    int min_index = -1;
    for (int l = 0; l < 12; l = l + 1)
    {
        if (sales_report[l] == sales_max)
        {
            max_index = l;
        }
        
        if (sales_report[l] == sales_min)
        {
            min_index = l;
        }
    }
    
    printf("\nSales Summary: \n");
    printf("Minimum Sales: $%.2f (%s)\n", sales_min, months[min_index]);
    printf("Maximum Sales: $%.2f (%s)\n", sales_max, months[max_index]);
    printf("Average Sales: $%.2f\n", sales_avg);
    
    float sum1 = 0;
    for (int m = 0; m < 6; m = m + 1)
    {
        sum1 = sum1 + sales_report[m];
    }
    float avg1 = sum1 / 6;
    
    float sum2 = 0;
    for (int n = 1; n < 7; n = n + 1)
    {
        sum2 = sum2 + sales_report[n];
    }
    float avg2 = sum2 / 6;
    
    float sum3 = 0;
    for (int o = 2; o < 8; o = o + 1)
    {
        sum3 = sum3 + sales_report[o];
    }
    float avg3 = sum3 / 6;
    
    float sum4 = 0;
    for (int p = 3; p < 9; p = p + 1)
    {
        sum4 = sum4 + sales_report[p];
    }
    float avg4 = sum4 / 6;
    
    float sum5 = 0;
    for (int q = 4; q < 10; q = q + 1)
    {
        sum5 = sum5 + sales_report[q];
    }
    float avg5 = sum5 / 6;
    
    float sum6 = 0;
    for (int r = 5; r < 11; r = r + 1)
    {
        sum6 = sum6 + sales_report[r];
    }
    float avg6 = sum6 / 6;
    
    float sum7 = 0;
    for (int s = 6; s < 12; s = s + 1)
    {
        sum7 = sum7 + sales_report[s];
    }
    float avg7 = sum7 / 6;
    
    printf("\nSix-Month Moving Average Report:\n");
    printf("%-10s - %10s $%.2f", months[0], months[5], avg1);
    printf("\n%-10s - %10s $%.2f", months[1], months[6], avg2);
    printf("\n%-10s - %10s $%.2f", months[2], months[7], avg3);
    printf("\n%-10s - %10s $%.2f", months[3], months[8], avg4);
    printf("\n%-10s - %10s $%.2f", months[4], months[9], avg5);
    printf("\n%-10s - %10s $%.2f", months[5], months[10], avg6);
    printf("\n%-10s - %10s $%.2f\n", months[6], months[11], avg7);
    
    printf("\nSales Report (highest to lowest)\n Month     Sales\n");
    float num = 0;
    for (int t = 0; t < 12; t = t + 1)
    {
        for (int u = t + 1; u < 12; u = u + 1)
        {
            if(sales_report[t] < sales_report[u])
            {
                const char* num2 = months[t];
                months[t] = months[u];
                months[u] = num2;
                num = sales_report[t];
                sales_report[t] = sales_report[u];
                sales_report[u] = num;
            
                
            }
        }
    }
    
    for (int v = 0; v < 12; v = v + 1)
    {
        printf("%-10s $%0.2f\n", months[v], sales_report[v]);
    }
    
    return 0;
}
