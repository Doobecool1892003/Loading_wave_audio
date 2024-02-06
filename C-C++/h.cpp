#include <iostream>
using namespace std;

int N = 8;
int A[] = {44, 77, 66, 11, 88, 55, 33, 22};
int step = 1;
int *output = A;

int main()
{
    for (int i = 0; i < step; i++)
    {
        for (int k = N - 1; k > i; k--)
        {
            bool c = false;
            if (A[k] < A[k - 1])
            {
                c = true;
                swap(A[k], A[k - 1]);
            }
            if (c == false)
            {
                break;
            }
        }
    }
}