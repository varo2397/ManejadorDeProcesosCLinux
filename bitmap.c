#include "bitmap.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    bitmap *algo = malloc(1*sizeof(bitmap));
    algo->array = malloc(3*sizeof(int));
    printf("%s\n", "libero memoria");
    free(algo->array);
    free(algo);

}
