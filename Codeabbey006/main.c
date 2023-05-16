#include <stdio.h>
#include <math.h>

#define MAX_ARRAY_SIZE 500

double round_array[MAX_ARRAY_SIZE];

void read_array(int tot_arr, int count);

int main(){
    int counter = 0, total_arr;

    scanf("%d", &total_arr);
    read_array(total_arr, counter);
    return 0;
}

void read_array(int tot_arr, int count){
    double temp1, temp2, temp3;
    double div, fraction;
    if(count == tot_arr){

    }
    else{
        scanf("%lf", &temp1);
        scanf("%lf", &temp2);
        div = temp1 / temp2;
        fraction = modf(div, &temp3);

        if(div < 0)
        {
            div = fabs(div);
            if(fraction == 0.50)
            {
                round_array[count] = (div + 0.5) * -1;
            }
            else
            {
                round_array[count] = round(div) * -1;
            }
        }
        else
        {
            if(fraction == 0.50)
            {
                round_array[count] = div + 0.5;
            }
            else
            {
                round_array[count] = round(div);
            }
        }
        printf("%.0f\n", round_array[count]);
        count++;
        read_array(tot_arr, count);
    }
}