/*
 * File:   Trian.c
 * Author: francisco
 *
 * Created on 17 de mayo de 2019, 04:22 AM
 */



#include "Trian.h"
void  TRI_1(){
    OSCCON=0b01010111;
    TRISAbits.RA6=0; 
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {10,20,30,40,50,60,70,80,90,100,90,80,70,60,50,40,30,20,10,0};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i];
    }
    
    while(1){
       
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
               PORTCbits.RC2=1;
               PORTAbits.RA6=1;
            }
            k=100-valoresSeno[i];
            for (j=0;j<k;j++){
                PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
}
}
void  TRI_2(){
    OSCCON=0b01010111;
    TRISAbits.RA0=0; 
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {10,20,30,40,50,60,70,80,90,100,90,80,70,60,50,40,30,20,10,0};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i]/2;
    }
    
    while(1){
       
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100/2-valoresSeno[i];
            for (j=0;j<k;j++){
               PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
}
}
void  TRI_3(){
    OSCCON=0b01010111;
    TRISAbits.RA6=0; 
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {10,20,30,40,50,60,70,80,90,100,90,80,70,60,50,40,30,20,10,0};
    int i, j,k;
    for (i=0;i<20;i++){    
        valoresSeno [i]=valoresSeno [i]/4;
    }
    
    while(1){
       
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++){
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100/4-valoresSeno[i];
            for (j=0;j<k;j++){
                 PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
}
}