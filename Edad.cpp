#include <conio.h>
#include <cstdio>

int main()
{
  char nombre [20];
  int Anac;
  int Aact=2024;

  printf("introduce tu nombre");
  scanf("%s", nombre);
  printf("introduce tu año de nacimiento");
  scanf("%d", &Anac);

  int edad= (Aact - Anac);

  printf("Hola %s, tu edad es %d", nombre, edad);

  return 0;
}
