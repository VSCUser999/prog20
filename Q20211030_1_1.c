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
                    if(data[i] > data[j]){
                        iTemp = data[j];
                        data[j] = data[i];
                        data[i] = iTemp;
                    }
                }
            }
        break;
        case 'd':
            for(i = 0;i < (number-1);i++){
                for(j = i+1; j < number;j++){
                    if(data[i] < data[j]){
                        iTemp = data[j];
                        data[j] = data[i];
                        data[i] = iTemp;
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