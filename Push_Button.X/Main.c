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
#include "Configuracion.h"
#include "LCD.h"
#include "Convertir.h"
#include "delay.h"

#define XTAL_FREQ 4000000 //4Mhz

unsigned int B=0,q=0,w=0,e=0,r=0,t=0,C=0,D=0,p=0,frecuencia,M=0;

void main(void)
{
    unsigned char A=47,cantidad=0,cant=0;
     char cadena[20],cad[20];
    unsigned int Z=0,X=0,V=0;
    OSCCON=0b01010111;
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
    Lcd_Out2(1,1,"     DICIS");
    Lcd_Out2(2,1,"Proyecto Final ");
    tm_1s();
   
    
}  
  
  if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> PWM");
    Lcd_Out2(2,1,"   Senoidal");
    tm_1s();
   

if(PORTAbits.RA2==1){
    do{
    w=0;
    if(B==0){  
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   Ingresar");
    Lcd_Out2(2,1,"   Comenzar");
    tm_1s();
    }
    if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Ingresar");
    Lcd_Out2(2,1,"   Comenzar");
    tm_1s();

    
    if(PORTAbits.RA2==1){
      do{
          e=0;
    if(B==0){   
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"   Frecuencia");
          Lcd_Out2(2,1,"   Ciclo");
          tm_1s();
 
    }
  if(B==1){
      
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"=> Frecuencia");
          Lcd_Out2(2,1,"   Ciclo");
          tm_1s();

          
    if(PORTAbits.RA2==1){
        r=0;
        do{  
          Lcd_Init();
          Lcd_Cmd(LCD_CLEAR);
          Lcd_Cmd(LCD_CURSOR_OFF);
          Lcd_Out2(1,1,"  000 Hz");
          tm_1s();

            if(PORTAbits.RA3==1){
                A++;
                lcd_goto(2,1);
                Lcd_Chr_CP(A);
                tm_1s();
                switch(A){
                                case 49: M=1000;
                break;
                                case 50: M=2000;
                break;
                                case 51: M=3000;
                break;
                                case 52: M=4000;
                break;
                                case 53: M=5000;
                break;
                                case 54: M=6000;
                break;
                                case 55: M=7000;
                break;
                                case 56: M=8000;
                break;
                                case 57: M=9000; 
                break;
                };
            }
       if(A>57){
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
          tm_1s();

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
    tm_1s();  
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
    tm_1s(); 
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
    tm_1s(); 
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
    tm_1s();
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
    tm_1s(); 
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
    tm_1s(); 
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
    tm_1s(); 
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
    tm_1s();
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
    tm_1s(); 
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
    tm_1s(); 
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
    tm_1s();

    }
    if(PORTAbits.RA2==1){
        p=0;
        Lcd_Init();
        Lcd_Cmd(LCD_CLEAR);
        Lcd_Cmd(LCD_CURSOR_OFF);
        /*X = atoi(A);
        V=A*1000;
       //X=A*100;*/
        X=A*1000;
        
        cant =  Conv_Entero(X,cad);
        unsigned char fre=0;
        //fre= atoi(A);
        PWM_generar(Z,M);
       
        Lcd_Out2(1,1,"F:  000 hz");
        lcd_goto(4,1);
        Lcd_Chr_CP(A);
        Lcd_Out2(2,1,"C: ");
        Lcd_Out2(2,7,"%");
        cantidad = Conv_Entero(Z,cadena);
        Lcd_Out(2,4,cadena);
        do{


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
    tm_1s();
 
    if(PORTAbits.RA2==1){
        w=0;
   do{
   
    if(B==0){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Sin 1");
    Lcd_Out2(2,1,"   Sin 2");
    tm_1s(); 
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Sin 1");
        do{
            SENO_1();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
    }
    }        
    
    if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   Sin 1");
    Lcd_Out2(2,1,"=> Sin 2");
    tm_1s(); 
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Sin 2");
        do{
            SENO_2();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
    }
    }
    
    if(B==2){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Sin 3");
    tm_1s();
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Sin 3");
        do{
            SENO_3();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
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
      B=0;
       }
   
       if(B<0){
      B=0;
      } 
    if(PORTAbits.RA0==1 && PORTAbits.RA3==1 ){
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
    tm_1s(); 
    
     
    if(PORTAbits.RA2==1){
        w=0;
   do{
   
    if(B==0){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Trin 1");
    Lcd_Out2(2,1,"   Trin 2");
    tm_1s(); 
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Trin 1");
        do{
            TRI_1();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
    }
    }        
    
    if(B==1){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"   Trin 1");
    Lcd_Out2(2,1,"=> Trin 2");
    tm_1s(); 
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Trin 2");
        do{
            TRI_2();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
    }
    }
    
    if(B==2){
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    Lcd_Out2(1,1,"=> Trin 3");
    tm_1s();
    if(PORTAbits.RA2==1){
        q=0;
       Lcd_Init();
       Lcd_Cmd(LCD_CLEAR);
       Lcd_Cmd(LCD_CURSOR_OFF);
       Lcd_Out2(1,1," Trin 3");
        do{
            TRI_3();
          if(PORTAbits.RA3==1){
              q=1;
          }  
        }while(q==0);
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
      B=0;
       }
   
       if(B<0){
      B=0;
      } 
    if(PORTAbits.RA0==1 && PORTAbits.RA3==1 ){
        w=1;
    }        
        }while(w==0);
        
    }
   
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
