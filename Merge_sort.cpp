#include<iostream>
#include<ctime>
#include<cstdlib>
#define Size 5

using namespace std;

void Merge(int arr[], int l, int m, int r)
{
    int L_size, R_size, i, j, k;

    L_size = m - l + 1;

    R_size = r - m;

    int L[L_size], R[R_size];

    for( i = 0; i < L_size; i++ )
    {
        L[i] = arr[l + i];
    }

    for( j = 0; j < R_size; j++ )
    {
        R[j] = arr[m + 1 + j];
    }

    i = 0;

    j = 0;

    k = l;

    while( i < L_size && j < R_size )
    {
        if( L[i] <= R[j] )
        {
            arr[k] = L[i];

            i++;
        }
        else
        {
            arr[k] = R[j];

            j++;
        }

        k++;
    }

    while( i < L_size )
    {
        arr[k] = L[i];

        k++;

        i++;
    }

    while( j < R_size )
    {
        arr[k] = R[j];

        k++;

        j++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if( l < r )
    {
        int mid = (l + r - 1) / 2;

        MergeSort(arr, l, mid);

        MergeSort(arr, mid + 1, r);

        Merge(arr, l, mid, r);
    }
}

void printA(int *a, int s)
{
  for( int i=0 ; i < s ; i++ )
  {
      cout << a[i] << " ";
  }

  cout << endl;
}

int main()
{
  int A[Size] = {4,2,3,5,1};

  cout << "Before" << endl;

  printA(A,Size);

  MergeSort(A, 0, Size-1);

  cout << "After" << endl;

  printA(A,Size);
}
