#include <stdio.h>

#define MAX_ARRAY_SIZE 500

void read_array(int tot_arr, int count, int *ptr_min);

int main(){
    int counter = 0, total_arr, suma = 0;
    int min_array[MAX_ARRAY_SIZE];

    scanf("%d", &total_arr);
    read_array(total_arr, counter, &min_array);
    printf("%d\n", suma);
    return 0;
}

void read_array(int tot_arr, int count, int *ptr_min){
    int temp1, temp2;
    if(count == tot_arr){

    }
    else{
        scanf("%d", &temp1);
        scanf("%d", &temp2);
        (temp1 <= temp2) ?
            (*ptr_min = temp1):
            (*ptr_min = temp2);

        ptr_min++;
        count++;
        read_array(tot_arr, count, &ptr_min);
    }

}