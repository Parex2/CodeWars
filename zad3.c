#include <stdbool.h>
#include <stdio.h>

bool validate_pin(const char *pin){

    for(int i = 0;;i++){
        if(pin[i] == '\0' && ((i - 1) == 3 || (i - 1) == 5)){
            return true;
        }else if(pin[i] == '\0'){
            return false;
        }else if(pin[i] < 48 || pin[i] > 57){
            return false;
        }
    }

}

int main(){
    printf("%d\n",validate_pin("1234"));
}

