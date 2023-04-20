#include <stdio.h>



int main (void){
  
  
    FILE *archivo = fopen("output.txt","w");

    fprintf(archivo,"Hello world!");
    fclose(archivo);
    return 0;
}
