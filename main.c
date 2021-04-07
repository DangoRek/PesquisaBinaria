#include <stdio.h>
#define N 32765
int main(void) {
  int x, i=0, pivo, esquerda, direita, v[N];

  for(i=0; i<N; i++){
    v[i]=i*2;
    printf("%d,",v[i]);
  }
  esquerda = 0;
  direita = N-1;
  printf("\nQual valor vc deseja buscar?");
  scanf("%d",&x);
  i=0;
  if(x<v[esquerda]||x>v[direita]){
    return 0;
  }
  while(esquerda<=direita){
    pivo = (esquerda + direita)/2;
    i++;
    if(x==v[pivo]){
      printf("Procuramos %d vezes seu numero\n",i);
      printf("Encontramos seu elemento");
      return 0;
    }
    if(x<v[pivo]){
      direita = pivo - 1;
    }
    else{
      esquerda = pivo + 1;
    }
  }
  printf("Não encontramos seu numero");
}