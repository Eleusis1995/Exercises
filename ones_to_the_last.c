#include <stdio.h>
void List_ones_last (int List_numbers[], int l_ong);
int main(){
    int List_numbers[]= {3,1,45,1,7,1,3,9,0,1,4,5,6,0,-3,5};
    int l_ong = 0;
    l_ong = sizeof(List_numbers)/sizeof(List_numbers[0]);
    printf("%d\n",l_ong);
    List_ones_last(List_numbers,l_ong);
    for(int i = 0;i < l_ong; i++){
        printf("[%d]%d,\n",i,List_numbers[i]);
    }

}
void List_ones_last (int List_numbers[], int l_ong){
    
    int last_one_pos = 0;
    int tmp = 0;
    last_one_pos = l_ong - 1;
    for(int i = 0; i < l_ong; i++){ 
       if(List_numbers[i]==1 && List_numbers[last_one_pos]!=1){
        tmp = List_numbers[i];
        List_numbers[i] = List_numbers[last_one_pos];
        List_numbers[last_one_pos] = tmp;
        last_one_pos --;
       }
       else if(List_numbers[last_one_pos]==1){
        last_one_pos --;
       }
       if(i == last_one_pos){
        break;
       }
    }
}