#include <stdio.h>
#include <conio.h>

main (){
int n1,n2,n3;
printf("\nPrimeiro angulo ");
scanf("%i",&n1);
printf("\nSegundo angulo");
scanf("%i",&n2);
printf("\nTerceiro angulo");
scanf("%i",&n3);

if(n1==90 or n2==90 or n3==90){
printf("\nTriangulo retangulo");
}
if(n1>90 or n2>90 or n3>90){
printf("Triangulo obtusangulo");
}
if(n1<90 and n2<90 and n3<90){
printf("Triangulo acutangulo");
}
getche();
}
