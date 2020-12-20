#include<iostream>
#include<stdio.h>
using namespace std;


int* matrikshasil[3][3];
int tampilanHasil();

void input_array1(int f_arr[][],int f_brs,int f_clm){
	for(int b=0;b<brs;b++){
		
		for(int c=0;c<clm;c++){
		cout<<"Masukkan baris ke "<<b<<" dan Kolom ke ["<<c<<"]=";
		cin>>arr[b][c];
		
		}
	cout<<endl;
	}
}

int* f_perkalian(int arr[3][3],int arr2[3][3])
{
	int perkalianMatriks[3][3];
	
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            perkalianMatriks[i][j] = 0;
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                perkalianMatriks[i][j] = perkalianMatriks[i][j] + arr[k][j]*arr2[k][j];
              
            }
        }
    }
    return perkalianMatriks;
}


int tampilanHasil()
{
    cout<<"\nHasil perkalian matriks A dengan B:"<<endl;
        for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matrikshasil[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
	int arr[3][3];
	int arr2[3][3];	
	int brs,clm,brs2,clm2,y;
	cout<<"Matriks 1\n";
	cout<<"Masukkan jumlah Baris  :";
	cin>>brs;
	cout<<"Masukkan jumlah Kolom  :";
	cin>>clm;
	
	input_array1(arr[][],brs,clm);
	cout<<endl;
	
	cout<<"Matriks 2\n";
	cout<<"Masukkan jumlah Baris  :";
	cin>>brs2;
	cout<<"Masukkan jumlah Kolom  :";
	cin>>clm2;
	
//	int arr2[brs2][clm2];
	
	for(int b=0;b<brs2;b++){
		
		for(int c=0;c<clm2;c++){
		cout<<"Masukkan baris ke "<<b<<" dan Kolom ke ["<<c<<"]=";
		cin>>arr2[b][c];
		
		}
	cout<<endl;
	}
	
	//output 1
	cout<<"matriks dengan array yaitu\n ";
	for(int b=0;b<brs;b++){
		
		for(int c=0;c<clm;c++){
		
		cout<<arr[b][c]<<" ";
		
		}
	cout<<endl;
	}
	cout<<endl;
	cout<<"x";
	cout<<endl<<endl;
	
	//output 2
	for(int b=0;b<brs;b++){
		
		for(int c=0;c<clm;c++){
		cout<<arr2[b][c]<<" ";
		
		}
	cout<<endl;
	}
	//penjumlahan matriks
	cout<<endl;
	cout<<"hasil perkalian matriks dengan array yaitu\n ";
	
	
	
	matrikshasil= f_perkalian(arr[3][3],arr2[3][3]);
	
	
	  tampilanHasil();

	

}



