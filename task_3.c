#include <stdio.h>

int bank_notes(const int price){
    int mass[] = {200, 100, 50, 20, 10};
    int start = 0;
    int ostat = price;
    for (int i = 0; i < 5; i++){
        while (ostat >= mass[i]){
            ostat -= mass[i];
            start++;
        }
        if(ostat == 0){
            return start;
        }
    }    return -1;
}

int main(){
    printf("%d\n", bank_notes(540)); 
    printf("%d\n", bank_notes(5)); 
    return 0;
}
