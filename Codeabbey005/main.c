#include <stdio.h>

#define MAX_ARRAY_SIZE 500

int min_array[MAX_ARRAY_SIZE];

void read_array(int tot_arr, int count);

int main(){
    int counter = 0, total_arr;
    int i;

    scanf("%d", &total_arr);
    read_array(total_arr, counter);
    return 0;
}

void read_array(int tot_arr, int count){
    int temp1, temp2, temp3;
    if(count == tot_arr){

    }
    else{
        scanf("%d", &temp1);
        scanf("%d", &temp2);
        scanf("%d", &temp3);
        (temp1 <= temp2) ?
            (min_array[count] = temp1):
            (min_array[count] = temp2);
        (temp3 <= min_array[count]) ?
            (min_array[count] = temp3):
            (min_array[count] = min_array[count]);
        printf("%d\n", min_array[count]);
        count++;
        read_array(tot_arr, count);
    }
}