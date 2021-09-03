# include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){


  int nota1, nota2, nota3, media;

  printf("Digite três notas: ");
  scanf("%d%d%d", &nota1, &nota2, &nota3);

  media = (nota1+nota2+nota3)/3;

  if (media >7){
    printf ("aprovado %d" );
  } else {
    printf ("reprovado %d" );
  }




  return;

}

