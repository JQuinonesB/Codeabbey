#include <stdio.h>
#include <math.h>

#define MAX_ARRAY_SIZE 300

double minmax_array[MAX_ARRAY_SIZE];

void read_array(int tot_arr, int count);
void find_min_max();

int main(){
    int counter = 0, total_arr = MAX_ARRAY_SIZE;

    read_array(total_arr, counter);
    find_min_max();
    return 0;
}

void read_array(int tot_arr, int count){
    double temp1;
    double min = 0, max = 0;
    if(count == tot_arr){

    }
    else{
        scanf("%lf", &temp1);
        minmax_array[count] = temp1;
        count++;
        read_array(tot_arr, count);
    }
}
void find_min_max(){
    int i = 0, min = 0, max = 0;

    for(i = 0;i < MAX_ARRAY_SIZE; i++){
        if(minmax_array[i] > max){
            max = minmax_array[i];
        }
        else if(minmax_array[i] < min){
            min = minmax_array[i];
        }
    }
    printf("%d %d ", max, min);
}
