/*
 * File:   Main.c
 * Author: francisco
 *
 * Created on 24 de abril de 2019, 02:03 AM
 */


#include <xc.h>
#include <stdlib.h>
#include "PWM.h"
#include "SENO.h"
#include "Keypad.h"
#include "Configuracion.h"
#include "LCD.h"
#include "Delay.h"
#include "Convertir.h"

#define XTAL_FREQ 8000000 //8Mhz

unsigned int B=0,q=0,w=0,e=0,r=0,t=0,C=0,D=0,p=0,frecuencia;
void main(void)
{
    unsigned char A=49,cantidad=0,cant=0;
     char cadena[20],cad[20];
    unsigned int Z=0,X=0,V=0;
    ANSELD=0;
    Lcd_Init(); 

    TRISAbits.RA0=1;
    TRISAbits.RA1=1;
    TRISAbits.RA2=1;
    TRISAbits.RA3=1;
    ANSELA=0;
  do{
      
  if(PORTAbits.RA0==1)
      {
          B++;
          __delay_ms(10);
      }
      
  if(PORTAbits.RA1==1)
      {
          B--;
          __delay_ms(10);
      }
 
if(B==0){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"Universidad de ");
    Lcd_Out2(2,1,"Proyecto Final ");
    __delay_ms(100);
    __delay_ms(100);
    __delay_ms(100);
   
    
}  
  
  if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> PWM");
    Lcd_Out2(2,1,"   Senoidal");
    __delay_ms(100);
    __delay_ms(100);  
    __delay_ms(100);
    __delay_ms(100); 
   

if(PORTAbits.RA2==1){
    do{
    w=0;
    if(B==0){  
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   Ingresar");
    Lcd_Out2(2,1,"   Comenzar");
    __delay_ms(100);
    __delay_ms(100);  
    __delay_ms(100);
    __delay_ms(100); 

    }
    if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Ingresar");
    Lcd_Out2(2,1,"   Comenzar");
    __delay_ms(100);
    __delay_ms(100);  
    __delay_ms(100);
    __delay_ms(100);     

    
    if(PORTAbits.RA2==1){
      do{
          e=0;
    if(B==0){   
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"   Frecuencia");
          Lcd_Out2(2,1,"   Ciclo");
           __delay_ms(100);
           __delay_ms(100);  
           __delay_ms(100);
           __delay_ms(100); 
 
    }
  if(B==1){
      
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"=> Frecuencia");
          Lcd_Out2(2,1,"   Ciclo");
              __delay_ms(100);
              __delay_ms(100);  
              __delay_ms(100);
              __delay_ms(100); 

          
    if(PORTAbits.RA2==1){
        r=0;
        do{  
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"  000 Hz");
          __delay_ms(100);
          __delay_ms(100);  

            if(PORTAbits.RA3==1){
                A++;
                lcd_goto(2,1);
                Lcd_Chr_CP(A);
                __delay_ms(100); 
            }
       if(A>56){
           A=47;
       }    
       if(PORTAbits.RA0==1 && PORTAbits.RA1==1){ // para salir de la frecuencia
           r=1;
       }     
            
        }while(r==0);
        
    }      
  }    
          
  if(B==2){
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"   Frecuencia");
          Lcd_Out2(2,1,"=> Ciclo");
              __delay_ms(100);
              __delay_ms(100);  
              __delay_ms(100);
              __delay_ms(100); 

if(PORTAbits.RA2==1){
    
do{
   t=0;    

 
if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0,"*10%");
    Lcd_Out2(2,0," 20%");
    Lcd_Out2(1,5," 30%");
    Lcd_Out2(2,5," 40%");
    Lcd_Out2(1,10," 50%");
    Lcd_Out2(2,10," 60%");
              __delay_ms(100);
              __delay_ms(100);  
    Z=10;

} 
if(B==2){
        Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0," 10%");
    Lcd_Out2(2,0,"*20%");
    Lcd_Out2(1,5," 30%");
    Lcd_Out2(2,5," 40%");
    Lcd_Out2(1,10," 50%");
    Lcd_Out2(2,10," 60%");
              __delay_ms(100);
              __delay_ms(100);  
    Z=20;

}   
if(B==3){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0," 10%");
    Lcd_Out2(2,0," 20%");
    Lcd_Out2(1,5,"*30%");
    Lcd_Out2(2,5," 40%");
    Lcd_Out2(1,10," 50%");
    Lcd_Out2(2,10," 60%");
              __delay_ms(100);
              __delay_ms(100);  
     Z=30;


}
if(B==4){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0," 10%");
    Lcd_Out2(2,0," 20%");
    Lcd_Out2(1,5," 30%");
    Lcd_Out2(2,5,"*40%");
    Lcd_Out2(1,10," 50%");
    Lcd_Out2(2,10," 60%");
              __delay_ms(100);
              __delay_ms(100);  
     Z=40;


} 
if(B==5){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0," 10%");
    Lcd_Out2(2,0," 20%");
    Lcd_Out2(1,5," 30%");
    Lcd_Out2(2,5," 40%");
    Lcd_Out2(1,10,"*50%");
    Lcd_Out2(2,10," 60%");
              __delay_ms(100);
              __delay_ms(100);  
     Z=50;


}  
if(B==6){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,0," 10%");
    Lcd_Out2(2,0," 20%");
    Lcd_Out2(1,5," 30%");
    Lcd_Out2(2,5," 40%");
    Lcd_Out2(1,10," 50%");
    Lcd_Out2(2,10,"*60%");
              __delay_ms(100);
              __delay_ms(100);  
     Z=60;


}  
if(B==7){


    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1," *70%");
    Lcd_Out2(2,1," 80%");
    Lcd_Out2(1,6," 90%");
    Lcd_Out2(2,6," 100%");
              __delay_ms(100);
              __delay_ms(100);  
    Z=70;

}  
   
if(B==8){


   
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1," 70%");
    Lcd_Out2(2,1,"*80%");
    Lcd_Out2(1,6," 90%");
    Lcd_Out2(2,6," 100%");
              __delay_ms(100);
              __delay_ms(100);  
    Z=80;

}
if(B==9){


    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1," 70%");
    Lcd_Out2(2,1," 80%");
    Lcd_Out2(1,6,"*90%");
    Lcd_Out2(2,6," 100%");
              __delay_ms(100);
              __delay_ms(100);  
    Z=90;

}  

if(B==10){



    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1," 70%");
    Lcd_Out2(2,1," 80%");
    Lcd_Out2(1,6," 90%");
    Lcd_Out2(2,6,"*100%");
              __delay_ms(100);
              __delay_ms(100);  
   Z=100;

}   
if(PORTAbits.RA0==1)
      {
          B++;
          __delay_ms(10);
      }
      
  if(PORTAbits.RA1==1)
      {
          B--;
          __delay_ms(10);
      }
       
 if(B>10){
      B=1;
  }
   
  if(B<0){
      B=1;
  } 
       
       if(PORTAbits.RA1==1 && PORTAbits.RA2==1){
           t=1;
       }   
       
       }while(t==0);
       
   }        
          
  }           
   if(PORTAbits.RA0==1)
      {
          B++;
          __delay_ms(10);
      }
      
  if(PORTAbits.RA1==1)
      {
          B--;
          __delay_ms(10);
      }       
     
 if(B>2){
      B=1;
  }
   
  if(B<0){
      B=1;
  } 
          
 if(PORTAbits.RA0==1 && PORTAbits.RA3==1){
       e=1; 
    }      
      }
      while(e==0);  
    }
    }
    if(B==2){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   Ingresar");
    Lcd_Out2(2,1,"=> Comenzar");
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);  

    }
    if(PORTAbits.RA2==1){
        do{
        p=0;
        Lcd_Init();
        Lcd_Cmd(LCD_CLEAR);
        Lcd_Cmd(LCD_CURSOR_OFF);
        X = atoi(A);
        V=A*1000;
       //X=A*100;
        cant =  Conv_Entero(X,cad);
        unsigned char fre=0;
        //fre= atoi(A);
        PWM_generar(Z,V);

        Lcd_Out2(1,1,"F:  000hz");
        lcd_goto(4,1);
        Lcd_Chr_CP(A);
        Lcd_Out2(2,1,"C: ");
        Lcd_Out2(2,7,"%");
        cantidad = Conv_Entero(Z,cadena);
        Lcd_Out(2,4,cadena);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);  
              __delay_ms(100);
              __delay_ms(100); 
              ////
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);
              __delay_ms(100);  
              __delay_ms(100);
              __delay_ms(100); 

        if(PORTAbits.RA0==1 && PORTAbits.RA2==1){
            p=1;
        }
        }while(p==0);
    }
    if(PORTAbits.RA0==1 && PORTAbits.RA2==1){
       w=1; 
    }
    
    if(PORTAbits.RA0==1)
      {
          B++;
          __delay_ms(10);
      }
      
    if(PORTAbits.RA1==1)
      {
          B--;
          __delay_ms(10);
      }
  if(B>3){
      B=1;
  }
   
  if(B<0){
      B=1;
  } 
    } while(w==0);
    }
    

    
    
    
} 
  
  if(B==2){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   PWM");
    Lcd_Out2(2,1,"=> Senoidal");
    __delay_ms(100);
    __delay_ms(100);  
    __delay_ms(100);
    __delay_ms(100);  

    
    
    if(PORTAbits.RA2==1){
        w=0;
        do{
                Lcd_Init();
                Lcd_Cmd(LCD_CLEAR);
                Lcd_Cmd(LCD_CURSOR_OFF);
                Lcd_Out2(1,1,"holo");

TRISCbits.RC2=0; 
int valoresSeno [51]= {4,8,12,16,20,24,28,32,
36,40,44,48,52,56,60,64,
68,72,76,80,84,88,92,96,
100,96,92,88,84,80,76,72,
68,64,60,56,52,48,44,40,
36,32,28,24,20,16,12,8,
4,0,-4};
    if(PORTAbits.RA3==1 && PORTAbits.RA2==1 ){
        w=1;
    }        
        }while(w==0);
        
    }
   
    
} 
  
  if(B==3){
     Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Triangular");  
    __delay_ms(100);
    __delay_ms(100);
    __delay_ms(100);
    __delay_ms(100); 
    
} 
  

  if(B>3){
      B=1;
  }
   
  if(B<0){
      B=1;
  }
      
  }while(1);  

    
    
    return;
}
