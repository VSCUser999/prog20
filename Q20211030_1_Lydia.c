#include <stdio.h>

void bubble(int [], int, char);

int main( ){
    int n, data[100], i, k, l;
    char op;
    scanf("%d %c", &n, &op);
    //scanf("%c", &op);
    for (i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }
    bubble(data, n, op);
}

void bubble(int data[], int n, char op){
    int k, l, itemp;
    if(op == 'a'){
        for(k=0; k<(n-1); k++){
            for(l=k+1; l<n; l++){
                if(data[k] > data[l]){
                    itemp = data[l];
                    data[l] = data[k];
                    data[k] = itemp;
                }
            }
        }
    }
    else if(op == 'd'){
        for(k=0; k<(n-1); k++){
            for(l=k+1; l<n; l++){
                if(data[k] < data[l]){
                    itemp = data[l];
                    data[l] = data[k];
                    data[k] = itemp;
                }
            }
        }
    }
    for(k=0; k<n; k++){
        printf("%d", data[k]);
    }
    printf("\n");
}