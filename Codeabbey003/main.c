#include <stdio.h>

#define MAX_ARR_SIZE 500

int read_array(int tot_arr, int count, int *ptr2arr);

int main(){
    int nums_array[MAX_ARR_SIZE];
    int counter = 0, total_arr, *ptr_array;

    scanf("%d", &total_arr);
    read_array(total_arr, counter, &nums_array);
    return 0;
}

int read_array(int tot_arr, int count, int *ptr2arr){
    if(count == tot_arr){
        return 0;
    }
    else{
        scanf("%d", *ptr2arr);
        count++;
        ptr2arr++;
    }

}