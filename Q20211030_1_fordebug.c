#include <stdio.h>

void bubble(int [], int ,char);

int main(){
    int k,n, arr[100];
    char op;

    scanf("%d %c", &n,&op);
    for (k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }

    bubble(arr, n, op);
}

void bubble(int data[], int number,char operation){
    
    int iTemp,i,j;

    switch(operation){
        case 'a':
            for(i = 0;i < (number-1);i++){
                for(j = i+1; j < number;j++){
                    printf("data[%d] = %d >  data[%d] = %d ???\n", i,data[i],j,data[j]);

                    if(data[i] > data[j]){
                        printf("data[%d] = %d >  data[%d] = %d YES,so need to exchange\n", i,data[i],j,data[j]);

                        iTemp = data[j];
                        data[j] = data[i];
                        data[i] = iTemp;

                        printf("data[%d] = %d >  data[%d] = %d,finish to exchange!\n", i,data[i],j,data[j]);
                    }
                }
            }
        break;
        case 'd':
            for(i = 0;i < (number-1);i++){
                for(j = i+1; j < number;j++){

                    printf("data[%d] = %d <  data[%d] = %d ???\n", i,data[i],j,data[j]);

                    if(data[i] < data[j]){
                        printf("data[%d] = %d <  data[%d] = %d YES,so need to exchange\n", i,data[i],j,data[j]);

                        iTemp = data[j];
                        data[j] = data[i];
                        data[i] = iTemp;

                        printf("data[%d] = %d >  data[%d] = %d,finish to exchange!\n", i,data[i],j,data[j]);
                    }
                }
            }
        break;
        default:
            for(i = 0;i < (number-1);i++){
                for(j = i+1; j < number;j++){
                    if(data[i] > data[j]){
                        iTemp = data[j];
                        data[j] = data[i];
                        data[i] = iTemp;
                    }
                }
            }

    }

    for(i = 0; i < number;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
}