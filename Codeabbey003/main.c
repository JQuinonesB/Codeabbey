#include <stdio.h>

#define MAX_ARRAY_SIZE 500

void read_array(int tot_arr, int count);

void main()
{
    int counter = 0, total_arr, suma = 0;
    int num1_array[MAX_ARRAY_SIZE], num2_array[MAX_ARRAY_SIZE];
    int min_array[MAX_ARRAY_SIZE];

    scanf("%d", &total_arr);
    read_array(total_arr, counter);
    return;
}

void read_array(int tot_arr, int count)
{
    int temp1, temp2;
    if(count == tot_arr)
    {
        return;
    }
    else
    {
        scanf("%d", &temp1);
        scanf("%d", &temp2);
        printf("%d\n", (temp1 + temp2));
        count++;
        read_array(tot_arr, count);
    }

}