#include <stdio.h>

 

double pot(double base,int exp){
double resultado=1.0;
 if(exp<0 && base==0){

     printf("erro");
      	return 0;

    } else if(exp>0){
      for(int i=0;i<exp;i++){
      	resultado*=base;
      }
    
      	
      }else if(exp==0){
     resultado=1;
      	
      }else if(exp<0){

       for(int i=0;i<-exp;i++){
       	resultado*=base;
       }
      	
       resultado = 1/resultado;

      	
      } 


return resultado;

}

int main() {

  double base,resultado;
  int exp;
  



    printf("diga um numero\n");
    scanf("%lf",&base);

    printf("me de um expoente\n");
    scanf("%d",&exp);

    resultado = pot(base,exp);
   

    printf("resultado %g \n",resultado);

    return 0;
}
