#include <stdio.h>

int *ft_range(int min, int max);
void  print_test(int *test, int size);

int main() {
  int *test;
  test = ft_range(3, 33);
  print_test(test, 30);
  return 0;
}

void  print_test(int *test, int size)
{
  int i;

  for (i = 0; i < size; i++)
  {
    printf("%d - ", test[i]);
  }
  if (size > 0)
    printf("%d\n", test[size - 1]);
}
