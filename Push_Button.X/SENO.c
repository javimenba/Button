/*
 * File:   SENO.c
 * Author: francisco
 *
 * Created on 24 de abril de 2019, 02:06 AM
 */


#include "SENO.h"

void SENO_100(){
    
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {50,35,21,10, 2, 0, 2,10, 21, 35, 50, 65, 79, 90, 98, 
    100, 98, 90, 79, 65};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i];
    }
    while(1){
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
                PORTCbits.RC2=1;
            }
            k=100-valoresSeno[i];
            for (j=0;j<k;j++){
                PORTCbits.RC2=0;
            }
        }
    }
    return;
}

void SENO_50(){
    
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {50,35,21,10, 2, 0, 2,10, 21, 35, 50, 65, 79, 90, 98, 
    100, 98, 90, 79, 65};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i]/2;
    }
    while(1){
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
                PORTCbits.RC2=1;
            }
            k=100/2-valoresSeno[i];
            for (j=0;j<k;j++){
                PORTCbits.RC2=0;
            }
        }
    }
    return;
}

void SENO_20(){
    
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {50,35,21,10, 2, 0, 2,10, 21, 35, 50, 65, 79, 90, 98, 
    100, 98, 90, 79, 65};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i]/3;
    }
    while(1){
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
                PORTCbits.RC2=1;
            }
            k=100/3-valoresSeno[i];
            for (j=0;j<k;j++){
                PORTCbits.RC2=0;
            }
        }
    }
    return;
}