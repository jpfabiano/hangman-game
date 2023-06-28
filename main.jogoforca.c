#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  char palavra[30];
  char dica[50];
  char r;
  int x, e = 0, v, v1 = 6, z = 0;
  for (x = 0; x < 1; x++) {
    printf(
        "Jogador 1 escolha a palavra que terá que ser adivinhada pelo jogador "
        "2 : \n");
    gets(palavra);
    printf("Você gostaria de dar uma dica? (s/n) : \n");
    scanf(" %c", &r);

    if (r == 's') {
      setbuf(stdin, NULL);
      printf("Escreva a dica : \n");
      gets(dica);
    }
    printf("\n|----------------------------------------------------------|");
    printf("\n|Jogador 2 seu objetivo é descobrir a palavra do jogador 1 |");
    printf("\n|Você tem 6 vidas, boa sorte!                             |");
    printf("\n|----------------------------------------------------------|");

    if (r == 's')
      printf("\nSua dica : %s ", dica);
    else
      printf("\nVocê não tem dica");

    x = strlen(palavra);
    printf("\nA palavra tem %d letras\n", x);
    for (x = 0; x < strlen(palavra); x++) {
      printf(" _");
    }

    char l[strlen(palavra)];
    char underline[strlen(palavra)];

    for (x = 0; x < strlen(palavra); x++) {
      underline[x] = '_';
    }
    setbuf(stdin, NULL); // 1 letra
    printf("\n\nVocê tem %d vidas ", v1--);
    printf("\n\nDigite uma letra : ");
    scanf("%s", &l[0]);
    fflush(stdin);
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[0]) {
        underline[x] = l[0];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas", v1--);
    }

    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 2 letra
    scanf("%s", &l[1]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[1]) {
        underline[x] = l[1];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 3 letra
    scanf("%s", &l[2]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[2]) {
        underline[x] = l[2];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 4 letra
    scanf("%s", &l[3]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[3]) {
        underline[x] = l[3];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 5 letra
    scanf("%s", &l[4]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[4]) {
        underline[x] = l[4];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 6 letra
    scanf("%s", &l[5]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[5]) {
        underline[x] = l[5];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    if (v1 == -1) {
      printf("\n\nVocê perdeu!");
      break;
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 7 letra
    scanf("%s", &l[6]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[6]) {
        underline[x] = l[6];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    if (v1 == -1) {
      printf("\n\nVocê perdeu!");
      break;
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 8 letra
    scanf("%s", &l[7]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[7]) {
        underline[x] = l[7];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    if (v1 == -1) {
      printf("\n\nVocê perdeu!");
      break;
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 9 letra
    scanf("%s", &l[8]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[8]) {
        underline[x] = l[8];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    if (v1 == -1) {
      printf("\n\nVocê perdeu!");
      break;
    }
    setbuf(stdin, NULL);
    printf("\n\nDigite uma letra : "); // 10 letra
    scanf("%s", &l[9]);
    fflush(stdin);
    z = 0;
    for (x = 0; x < strlen(palavra); x++) {
      if (palavra[x] == l[9]) {
        underline[x] = l[9];
        printf(" %c", underline[x]);
      } else {
        printf(" %c", underline[x]);
        z++;
      }
    }
    if (strstr(underline, palavra) != NULL) {
      printf("\n\nParabéns você ganhou\n");
      break;
    }
    if (z == strlen(palavra)) {
      printf("\n\nVocê tem %d vidas restantes", v1--);
    }
    if (v1 == -1) {
      printf("\n\nVocê perdeu!");
      break;
    }

    return 0;
  }
}
