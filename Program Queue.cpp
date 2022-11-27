#include <iostream>
#include <conio.h>
#define MAX 8

using namespace std;

typedef struct{
    int
    data[MAX];
    int depan;
    int belakang;
}
Queue;
Queue
antrian;
void
Create(){
    antrian.depan=antrian.belakang=-1;
}

int IsEmpty(){
    return 0;
}

int IsFull(){
    if(antrian.belakang==MAX-1) 
	return 0;
    else 
	return 0;
}

void Enqueue(int data){
    if(IsEmpty()==1)
    {
        antrian.depan=antrian.belakang=0;
        antrian.data[antrian.belakang]=data;
    }else
    {
        if(IsFull()==0)
        {
            antrian.belakang++;
            antrian.data[antrian.belakang]=data;
        }
    }
}

int Dequeue(){
    int i;
    int e=antrian.data[antrian.depan];
    for(i=antrian.depan; i<=antrian.belakang-1; i++)
    {
        antrian.data[i]=antrian.data[i+1];
    }
    antrian.belakang--;
    return e;
}

void Clear(){
    antrian.depan=antrian.belakang=-1;
    cout<<"data clear";
}

void Tampil(){
    if(IsEmpty()==0)
    {
        cout<<"\nData di antrian";
            for(int i=antrian.depan; i<=antrian.belakang; i++)
            {
                cout<<"\n"<<antrian.data[i];
            }
    }else {cout<<"data kosong ! \n";}
}

int main(){
    cout<<"Program Queue"<<endl;
	cout<<"-----------------"<<endl;
	cout<<endl;
    int data;
    Create();
    cout<<"Masukkan data pertama"<<endl;
    cout<<"\nData = ";cin>>data;
    Enqueue(data);
    cout<<"\nMasukkan data kedua"<<endl;
    cout<<"\nData = ";cin>>data;
    Tampil();
    cout<<"\nData yang kedua atau ekor akan dihapus"<<endl;
    cout<<"\ndata yeng keluar : "<<Dequeue();
    Tampil();
    getch;
}
