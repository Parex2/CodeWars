#include <stdio.h>
#include <string.h>


int digital_root(int n){
    int sum = 0;
    char buf[50];
    memset(buf, 0, 50);
    sprintf(buf, "%d", n);
    for (int i = 0; i < 50; i++)
    {
        if(buf[i] == '\0'){
            break;
        }else{
            sum += ((int)buf[i] - 48);
        }
    }

    if(sum > 9){
       return digital_root(sum);
    }

    return sum;
}

int main(){
    
    printf("%d\n", digital_root(9));

    
}