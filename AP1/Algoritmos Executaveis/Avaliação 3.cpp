#include <stdio.h>
#include <conio.h>

main(){
int num,soma=0,maior=-99,menor=99;

do{
printf("\nDigite um numero");
scanf("%i",&num);
soma=soma+num;
if(num>maior){
maior=num;
}
if(num<menor){
menor=num;
}
}while(soma!=20);

printf("\nMaior numero %i ",maior);
printf("\nMenor numero %i",menor);
getche();

}
