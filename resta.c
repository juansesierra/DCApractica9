#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main()
{
  float a, b, res;

  /* Setting the i18n environment */
  setlocale (LC_ALL, "");
  bindtextdomain ("resta", "/usr/share/locale/");
  textdomain ("resta");
  printf(_("BIENVENIDO\n"));
  printf(_("PROGRAMA DE RESTA DE DOS NUMEROS\n"));
  printf(_("Introduce el primer numero: \n"));
  scanf("%f", &a);
  printf(_("Introduce el segundo numero: \n"));
  scanf("%f", &b);
  res = a - b;
  printf(_("El resultado de la resta es: "));
  printf("%f", res);
  printf("\n");

  return EXIT_SUCCESS;
}
