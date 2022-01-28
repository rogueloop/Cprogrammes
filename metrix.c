#include<stdio.h>
void selection_sort (int[], int);
void bubble_sort (int[], int);

void main ()
{
  int n, c;
  printf ("enter the size of array:");
  scanf ("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
    {
      printf ("enter the number");
      scanf ("%d", &a[i]);
    }

  printf ("enter the choice\n1.selection\n2.bubble sorting:  ");
  scanf ("%d", &c);

  switch (c)
    {
    case 1:
      selection_sort (a, n);
      for (int i = 0; i < n; i++)
   {
     printf ("%d\t", a[i]);

   };
      break;

    case 2:
      bubble_sort (a, n);
      for (int i = 0; i < n; i++)
   {
     printf ("%d\t", a[i]);

   };
      break;



    default:
      printf ("wrong choice");

    }
}



// selection_sort funtion

 void selection_sort (int a[], int n)
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

// bubble_sort function


void bubble_sort (int a[], int n)
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