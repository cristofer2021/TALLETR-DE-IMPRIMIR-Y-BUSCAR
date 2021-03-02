#include <iostream>

using namespace std;

#define x 100

int  ingresar (int a[], int n);

int  ordenar (int a[], int n);

int  imprimir (int a[], int n);



int main()
{

    int arr[x];

    int num;
    cout<<"DIgite el tamaño del arreglo ";
    cin>>num;
    ingresar(arr,num);
    cout<<endl;
    imprimir(arr,num);
    cout<<endl;
    ordenar(arr,num);
    cout<<endl;
    imprimir(arr,num);

    return 0;
}




int  ingresar (int a[], int n)
{
    int i;

    for (i=0 ; i<n ; i++)
    {
        cout<<"Dijite los numeros sean positivos o negativos "<<i+1<<" : ";
        cin>>a[i];
    }
return 0;
}


int ordenar (int a[], int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }

return 0;
}


int imprimir(int a[], int n)
{
    int i;
    for (i=0 ; i<n; i++)
    {
        cout<<"["<<a[i]<<"]";
    }
return 0;
}