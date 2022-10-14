#include <stdio.h>
#include <stdlib.h>

int saisirTaille ()
{
    int n;
    do
    {
        printf("introduire la taille du tableau \n");
        scanf("%d",&n);
    }while(n<=0);

    return n;
}


void remplissageTableau (int T1[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("introduire l element T[%d] \n",i+1);
        scanf("%d",&T1[i]);
    }
}


void affichageTableau (int T1[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("T[%d]=%d \n",i,T1[i]);
    }

}


void transfert (int T1[], int T2[], int n)
{
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            T2[j]
    }
}
