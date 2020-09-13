
#include <iostream>
#include <fstream>
#include"heapSort.h"

using namespace std;
int arreglo[100],n;

void Ingresar_heapSort(){
  ofstream heapsort;
  heapsort.open ("heapSort.txt",ios::app);
  
 

 cout <<"INGRESE LA CANTIDAD DE VALORES ";
 cin>>n;
 heapsort<<"INGRESE LA CANTIDAD DE VALORES ";
 heapsort<<n<<endl;
 heapsort<<"vALORES INGRESADOS \n";

 for(int i=1;i<=n;i++)
    {
        cin>>arreglo[i];
        heapsort<<arreglo[i];
    }
}


void Orden_heapSort(){
   ofstream heapsort;
  heapsort.open ("heapSort.txt",ios::app);
  heapSort(arreglo,  n);
cout <<"El orden es:";
heapsort <<"\nEl orden es:";
 for(int i=1;i<=n;i++)
    {
        cout<<"["<<arreglo[i]<<"]";
        heapsort<<"["<<arreglo[i]<<"]";
    }
}



void heapSort(int b[], int n)
{
   int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }
}









