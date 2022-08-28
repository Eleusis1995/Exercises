#include <stdio.h>
#define SUM 15
typedef struct find_num_res{
    int n;
    int f;
}pairs;

void Find_SUM (int l_ong , pairs r[]);
int main(){
    pairs r[]={{1,0},{5,0},{15,0},{9,0},{4,0},{7,0},{10,0},{5,0}};
    int l = sizeof(r)/sizeof(r[0]);
    Find_SUM(l,r);
    printf("Las posiciones que dan de resultado %d\n",SUM);
    for(int i = 0; i< l; i++){
        if(r[i].f == 1){
            printf("%d,",i);
        }
    }
    
    return 0;
}
void Find_SUM (int l_ong,pairs r[]){
    for(int i = 0; i < l_ong; i++){
        for(int j = i; j<l_ong-1;j++){
            if((r[i].n + r[j].n) == SUM){
                r[i].f = 1;
                r[j].f = 1;
            }
        }
    }
    
}