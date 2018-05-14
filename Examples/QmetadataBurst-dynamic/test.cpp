#include <stdio.h>
#include <malloc.h>

#define NUM_OF_BURSTS 10

int main()
{
    FILE *fin1;
    float slptime;
    float sleeptime[NUM_OF_BURSTS];

    fin1 = fopen("sleeptime.txt","r");

    for(int i=0; i < NUM_OF_BURSTS; i++){
        if(fscanf(fin1,"%f",&slptime) == EOF){
            printf("EOF while reading num_pkts\n");
            return 1;
        }
        sleeptime[i] = slptime;
    }
    fclose(fin1);

    return 0;
}