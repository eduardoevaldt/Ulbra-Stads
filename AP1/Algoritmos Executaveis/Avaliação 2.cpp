#include <stdio.h>
#include <conio.h>

main(){
int cgu,i=0;
float g1,g2,mediaaluno,mediaturma,somat=0;
do{
printf("\nCGU do aluno: ");
scanf("%i",&cgu);
i++;
if(cgu==0){
break;}

printf("\nInforme a primeira nota");
scanf("%f",&g1);
printf("\nInforme a segunda nota");
scanf("%f",&g2);

mediaaluno=((g1)+(g2*2))/3;

if(mediaaluno<7){
printf("\nMedia do aluno %.2f, Substituicao",mediaaluno);
somat=somat+mediaaluno;}

if(mediaaluno>=7){
printf("\nMedia do aluno %.2f, Aprovado",mediaaluno);
somat=somat+mediaaluno;}
mediaturma=somat/i;

}while(cgu!=0);

printf("\nForam lidos %i alunos",i-1);
printf("\nMedia turma %f",mediaturma);
getche();
}
