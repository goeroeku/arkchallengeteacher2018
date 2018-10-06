#include <stdio.h>
#include <string.h>

int main(){
    int j = 0;
    for(char i='a';i<='z';i++){
        j++;
        if(i=='m') break;
    }
    printf("%i",j);
    return 0;
}