//program of fisrt 10 natural numbers
#include <stdio.h>
int main()
 {
  int  i, sum = 0;

  printf("Enter a  number ");
  scanf("%d", &i);

  for (i = 1; i <= 10; ++i)
 {
    sum += i;
  }

  printf("Sum = %d", sum);
  return 0;
}
