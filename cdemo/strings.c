#include <stdio.h>
#include <string.h>

int main(void) {
  char alpharry[26];
  for (int i = 0; i < 26; i++){
    alpharry[i] = 97 + i;
  }
  char alphstr [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(alpharry, alphstr) == 0)
     printf("Same: Positive\n");
  else
     printf("Same: Negative\n");
  for (int i = 0; i < 26; i++){
    alphstr[i] = alphstr[i] - 32;
  }
  if (strcmp(alpharry, alphstr) == 0)
     printf("Change: Negative\n");
  else
     printf("Change: Positive\n");
  
  char str[52];
  strcpy(str, alpharry);
  strcat(str, alphstr);
  printf("Lowercase Alphabet: %s\n", alpharry);
  printf("Uppercase Alphabet: %s\n", alphstr);
  printf("Full Alphabet: %s\n", str);
}
