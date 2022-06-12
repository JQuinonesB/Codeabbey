#include <stdio.h>

#define MAX_ARRAY_SIZE 500

int min_array[MAX_ARRAY_SIZE];

void read_array(int tot_arr, int count);

int main(){
    int counter = 0, total_arr, *ptr_arr;
    int i;

    scanf("%d", &total_arr);
    read_array(total_arr, counter);
    for(i = 0; i < total_arr; i++){
        printf("%d\n", min_array[i]);
        ptr_arr++;
    }
    return 0;
}

void read_array(int tot_arr, int count){
    int temp1, temp2, *ptrarr;
    if(count == tot_arr){
        ptrarr = &min_array[0];
    }
    else{
        scanf("%d", &temp1);
        scanf("%d", &temp2);
        (temp1 <= temp2) ?
            (min_array[count] = temp1):
            (min_array[count] = temp2);
        count++;
        read_array(tot_arr, count);
    }
}