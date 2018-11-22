#include<stdio.h>

int main()
  {
  int liczba1,liczba2;
  char znak;
  
  printf("podaj liczba 1:\n");
  scanf("%i",&liczba1);
  
  printf("podaj liczba 2:\n");
  scanf("%i",&liczba2);
  
  getchar();
    
  printf("podaj znak +-*/^");
  scanf("%c",&znak);
  
  switch(znak)
  {
    case '+': printf("%i+%i=%i",liczba1,liczba2,liczba1+liczba2);break;
    case '-': printf("%i-%i=%i",liczba1,liczba2,liczba1-liczba2);break;
    case '*': printf("%i*%i=%i",liczba1,liczba2,liczba1*liczba2);break;
    case '/': printf("%i+%i=%i",liczba1,liczba2,liczba1/liczba2);break;
    case '^': printf("%i+%i=%i",liczba1,liczba2,liczba1^liczba2);break;
    default: printf("podano zly znak");
  }
 
  
  
  getchar();
  return 0;
  }
