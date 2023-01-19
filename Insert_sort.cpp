#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void printA(int *a, int s)
{
  for( int i=0 ; i < s ; i++ )
  {
    cout << a[i] << " ";
  }

  cout << endl;
}

int insert_sort( int A[], int Size )
{
    for( int i=1 ; i < Size ; i++ )
    {
        int key,j;

        key=A[i];

        j=i-1;

        while( key < A[j] && j >= 0)
        {
            A[j+1]=A[j];

            j--;
        }

        A[j+1]=key;

        for(int k=0 ; k < Size ; k++)
        {
            if( k== 0)
            {
                cout << A[k];
            }
            else
            {
                cout << ' ' << A[k];
            }
        }

        cout << endl;
    }
}
int main()
{
  int Size=5;

  int A[Size] = {4,2,3,5,1};

  cout << "Before" << endl;

  printA(A,Size);

  cout << endl;

  insert_sort(A,Size);

  cout << endl;

  cout << "After" << endl;

  printA(A,Size);
}
