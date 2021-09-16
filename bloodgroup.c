#include <stdio.h>
#include <string.h>
void main()
<<<<<<< HEAD
{ char Name[50], G[12], answer[10];
=======
{ char Name[10], G[5], answer[10];
>>>>>>> 433991d434a8c83a1761fb6cee64043eb08f36bd
  int i;
  do
  {
    printf("What is your the fox say? ");
    scanf("%s", Name);
    do
    {
<<<<<<< HEAD
      printf("What is your blood group [A, B, AB, or o]? ");
=======
      printf("How is your blood group [A, B, AB, or O]? ");
>>>>>>> 433991d434a8c83a1761fb6cee64043eb08f36bd
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
