//Done by Sreedeep
#include <stdio.h>
int a, b;
void selection(int[], int);
void bubble(int[], int);

void selection(int a[], int n)
{
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

  void bubble(int a[], int n)
  {
    int temp, flag;
    for (int i = 0; i < n; i++)
    {
      flag = 1;
      for (int j = 0; j < n - 1; j++)
      {
        if (a[j] > a[j + 1])
        {
          flag = 0;
          temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
      }
      if (flag)
      {
        break;
      }
    }
  }
//an comment
void main()
  {
    int n, p;
    printf("enter number of elements to sort:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
      printf("enter the value");
      scanf("%d", &a[i]);
    }

    printf("enter the sort type\n\t1.selection\n\t2.bubble \n  ");
    scanf("%d", &p);

    switch (p)
    {
    case 1:
      selection(a, n);
      for (int i = 0; i < n; i++)
      {
        printf("%d\n", a[i]);
      }
      break;

    case 2:
      bubble(a, n);
      for (int i = 0; i < n; i++)
      {
        printf("%d\n", a[i]);
      };
      break;

    default:
      printf("invalid choice :(");
    }
  }
  

