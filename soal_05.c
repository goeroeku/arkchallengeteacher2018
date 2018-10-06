#include <stdio.h>
#include <string.h>

int nCharInString(char kata[], char huruf){
    int n = strlen(kata);
    int jml = 0;
    for(int i=0;i<n;i++){
        if(kata[i] == huruf) jml++; 
    }
    return jml;
}

int main(){
    printf("%i", nCharInString("arkademy", 'a'));
    return 0;
}