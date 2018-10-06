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
    int n = 0;
    char angka[3];
    for(int i=1;i<=100;i++){
        sprintf(angka, "%i", i);
        n += nCharInString(angka, '3');
    }
    printf("%i",n);
    return 0;
}