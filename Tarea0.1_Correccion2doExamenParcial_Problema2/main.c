#include <stdio.h>
#include <stdlib.h>
#define N 10
void OrdenaArrayBubbleSort(int Array[]);
void Imprime(int Array[]);
int main()
{
    int Array[N]={1,2,3,4,5,6,7,8,9,10};
    printf("El arreglo original es;");
    Imprime(Array);
    printf("\n");
    OrdenaArrayBubbleSort(Array);
    printf("El arreglo ordenado en descendente es;");
    Imprime(Array);

}

void OrdenaArrayBubbleSort(int Array[])
{
    int i,j,aux;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(Array[j]<Array[j+1])
            {
                aux=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=aux;
            }
        }
    }
}
void Imprime(int Array[])
{
    int j;
    for(j=0;j<N;j++)
    {
        printf("%d,",Array[j]);
    }
}
