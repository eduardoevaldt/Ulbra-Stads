#include <stdio.h>
#include <conio.h>

main(){
int cgu,i=0,aprovado=0;
float g1,g2,mediaaluno;
do{
printf("\nCGU do aluno: ");
scanf("%i",&cgu);
i++;
printf("\nInforme a primeira nota");
scanf("%f",&g1);
printf("\nInforme a segunda nota");
scanf("%f",&g2);

mediaaluno=((g1)+(g2*2))/3;
if(mediaaluno>=6){
printf("\nMedia do aluno %.2f, Aprovado",mediaaluno);
aprovado++;}

if(mediaaluno<6){
printf("\nMedia do aluno %.2f, Substituicao",mediaaluno);}
}while(i!=10);

printf("\nAlunos aprovados %i",aprovado);

getche();
}
