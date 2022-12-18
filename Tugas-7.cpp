#include<iostream>
#include <stdlib.h>
using namespace std;
void menu();
void penjumlahan();
void perkalian();
void transpose();

int main ()
{
    menu();
    return 0;
}

void menu(){
    int choose;
    char i;
    do
    {
    system ("CLS"); //opsional, matikan jika code tidak bisa di jalankan berulang
    cout<<"Program menghitung Matriks"<<endl;
    cout<<"1. Penjumlahan "<<endl;
    cout<<"2. Perkalian "<<endl;
    cout<<"3. Transpose"<<endl;
    cout<<endl;
    cout<<"Masukkan Pilihan Anda : ";
    cin>>choose;
    cout<<endl<<endl;

    switch (choose)
    {
        case 1:
            penjumlahan();
            break;

        case 2:
            perkalian();
            break;

        case 3:
            transpose();
            break;

        default:
            cout<<"Pilihan menu operator yang anda pilih tidak tersedia, hasil tidak bisa ditampilkan\n";
    }
    cout << "\napakah anda ingin menjalankan program nya kembali? y atau t";
    cin >> i;
    if (i!='y')
    {
        break;
    }
    else
    {
        continue;
    }
    }
    while (i = 'y');
}
void penjumlahan(){
        typedef double Matriks [3] [3];
        Matriks A, B, C;
        int h,i;
        
        cout<<"Penjumlahan Matriks"<<endl;
        cout<<"-------------------"<<endl<<endl;
         
        cout<<"Matriks A : "<<endl; 
        for(h=0; h<3; h++)
        {
            for(i=0; i<3; i++)
                    {
                        cout<<" A["<<h<<"] ["<<i<<"]= ";
                        cin>> A [h] [i];
                    }
        }
        cout<<endl;
        
        cout<<"Matriks B : "<<endl; 
        for(h=0; h<3; h++)
        {
            for(i=0; i<3; i++)
            {
                cout<<" B ["<< h <<"] ["<< i <<"]= ";
                cin>> B [h] [i];
            }
        }
        cout<<endl;

        for(h=0; h<3; h++)
        {
            for(i=0; i<3; i++)
            {
            C [h] [i] = A [h] [i] + B [h] [i] ;
            }
        }
        
        cout<<"Hasil Penjumlahan Matriks"<<endl; 
        cout<<"-------------------------"<<endl<<endl;
 
        for(h=0; h<3; h++)
        {
            for(i=0; i<3; i++)
            {
            cout<<" C ["<< h <<"]  ["<< i <<"]= "<< C [h] [i]<<endl;
            }
        }
        cout<<endl;
}
void perkalian(){
    typedef double Matriks [3] [3];
    Matriks A, B, C;
    int i, j, k, m, n, p, q, jumlah = 0;

    cout<<"Perkalian Matriks"<<endl;
    cout<<"-------------------"<<endl<<endl;

    cout<<"Matriks A : "<<endl; 
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                {
                cout<<" A["<<i<<"] ["<<j<<"]= ";
                cin>> A [i] [j];
                }
        }
        cout<<endl;
        
    
    cout<<"Matriks B : "<<endl; 
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        cout<<" B["<<i<<"] ["<<j<<"]= ";
        cin>> B [i] [j];
        }
    }
    cout<<endl;

    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
      {
        for(k = 0; k < 3; k++)
        {
        jumlah = jumlah + A[i][k] * B[k][j];
        }
        C[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout<<endl;
    
    cout << "Hasil perkalian matriks: \n";
    cout<<"-------------------------"<<endl;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
void transpose(){
    typedef double Matriks [3] [3];
    Matriks A, B, C, D; 
    int h,i;
        
    cout<<"Transpose Matriks"<<endl;
    cout<<"-------------------"<<endl<<endl;

    for(h=0; h<3; h++)
    {
        for(i=0; i<3; i++)
        {
        cout<<" A["<<h<<"] ["<<i<<"]= ";
        cin>> A [h] [i];
        }
    }
    cout<<endl;
        
    cout << "Matriks sebelum Transpose" << endl;
    for (h = 0; h < 3; h++)
    {
        for (i = 0; i < 3; i++)
        {
        cout << A [h][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (h = 0; h < 3; h++)
    {
        for (i = 0; i < 3; i++)
        {
        C [i][h] = A [h][i];
        }
    }

    cout << "Hasil Transpose Matriks : \n";
    for (h = 0; h < 3; h++)
    {
        for (i = 0; i < 3; i++)
        {
        cout << C [h][i] << "\t";
        }
        cout << endl;
    }
}