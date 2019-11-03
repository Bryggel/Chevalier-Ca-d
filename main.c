#include <stdio.h>
/* Ci-dessous fonction principale du progamme appelée main
Tous les programmes débute avec ceci
Ma fonction affiche un message à l'écran
*/

int main(void)
{
int niveau = 150;
if (niveau < 1)
{

  printf("Noob \n");

}
else if (niveau >= 1 && niveau <= 100)
{
printf("Normalfag");
}
else
{
printf ("Pro");
}
return 0 ;
 }
