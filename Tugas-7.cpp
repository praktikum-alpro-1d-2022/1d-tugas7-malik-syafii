#include<iostream>
#include <stdlib.h>
using namespace std;
void menu();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
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
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian "<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Transpose"<<endl;
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
            pengurangan();
            break;

        case 3:
            perkalian();
            break;

        case 4:
            pembagian();
            break;

        case 5:
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
void pengurangan(){
        typedef double Matriks [3] [3];
        Matriks A, B, C;
        int h,i;
        
        cout<<"Pengurangan Matriks"<<endl;
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
            C [h] [i] = A [h] [i] - B [h] [i] ;
            }
        }
        
        cout<<"Hasil Pengurangan Matriks"<<endl; 
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
        int h,i;
        
        cout<<"Perkalian Matriks"<<endl;
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
            C [h] [i] = A [h] [i] * B [h] [i] ;
            }
        }

        cout<<"Hasil Perkalian Matriks"<<endl; 
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
void pembagian(){
        typedef double Matriks [3] [3];
        Matriks A, B, C; 
        int h,i;
        
        cout<<"Pembagian Matriks"<<endl;
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
            C [h] [i] = A [h] [i] / B [h] [i] ;
            }
        }

        cout<<"Hasil Pembagian Matriks"<<endl; 
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
void transpose(){
        typedef double Matriks [3] [3];
        Matriks A, B, C, D; 
        int h,i;
        
        cout<<"Transpose Matriks"<<endl;
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

        cout << "Matriks: A\n";
        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            cout << A [h][i] << "\t";
            }
            cout << endl;
        }

        cout << "Matriks: B\n";
        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            cout << B [h][i] << "\t";
            }
            cout << endl;
        }
        cout << endl;

        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            C [i][h] = A [h][i];
            }
        }

        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            D [i][h] = B [h][i];
            }
        }

        cout << "Hasil Transpose Matriks: A\n";
        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            cout << C [h][i] << "\t";
            }
            cout << endl;
        }

        cout << "Hasil Transpose Matriks: B\n";
        for (h = 0; h < 3; h++){
            for (i = 0; i < 3; i++){
            cout << D [h][i] << "\t";
            }
            cout << endl;
        }
}