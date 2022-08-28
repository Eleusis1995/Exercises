#include <stdio.h>
#define SUM 15
typedef struct find_num_res{
    int n1;
    int n2;
}pairs;

void Find_SUM (int Array[],int l_ong , pairs *r);
int main(){
    pairs r;
    r.n1 = 0;
    r.n2 = 0;
    int my_array[] = {6,8,2,9,6,5,34,8,12,13,14,20};
    int l =0; 
    l = sizeof(my_array)/sizeof(my_array[0]);
    Find_SUM(my_array,l,&r);
    printf("Las posiciones que dan la suma de %d son %d y %d : ",SUM, r.n1,r.n2);
    return 0;
}
void Find_SUM (int Array[],int l_ong,pairs *r){
    
    int f = 0;
    for(int i = 0; i < l_ong; i ++){
        for(int j = i + 1; j < (l_ong - (i+1)); j++){
            if((Array[i] + Array[j]) == SUM){
                r->n1 = i;
                r->n2 = j;
                f = 1;
            }
            if (f == 1){
                break;
            }
        }
    }
}