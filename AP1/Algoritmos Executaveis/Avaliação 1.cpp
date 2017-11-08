#include <stdio.h>
#include <conio.h>

main (){
int idade,infantil=0,mirin=0,adultos=0,i=0;
do{
printf("Digite uma idade: \n ");
scanf("%i",&idade);
i++;

if(idade>=5 and idade<12){
infantil++;
}
if(idade>=12 and idade<18){
mirin++;
}
if(idade>=18){
adultos++;
}
}while(i!=10);

printf("\nAtletas infantis %i",infantil);
printf("\nAtletas mirins %i",mirin);
printf("\nAtletas adultos %i",adultos);

getche();
}
