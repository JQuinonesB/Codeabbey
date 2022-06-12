#include <stdio.h>

void read_array(int tot_arr, int count, int *ptr_suma);

int main(){
    int counter = 0, total_arr, suma = 0;

    scanf("%d", &total_arr);
    read_array(total_arr, counter, &suma);
    printf("%d\n", suma);
    return 0;
}

void read_array(int tot_arr, int count, int *ptr_suma){
    int temp;
    if(count == tot_arr){

    }
    else{
        scanf("%d", &temp);
        *ptr_suma += temp;
        count++;
        read_array(tot_arr, count, ptr_suma);
    }

}