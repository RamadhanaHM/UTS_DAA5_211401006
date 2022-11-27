#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) 
{
   if(top>=n-1)
   cout<<"Tumpukan data"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Tumpukan data"<<endl;
   else {
      cout<<"Data yang muncul adalah "<< stack[top] <<endl;
      top--;
   }
}
void tampilan() {
   if(top>=0) {
      cout<<"Data tumpukannya adalah:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Data kosong";
}
int main() {
   int ch, val;
   cout<<"1) Masukkan data"<<endl;
   cout<<"2) Data teratas dan akan dihapus"<<endl;
   cout<<"3) Tampilan data"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Masukkan pilihan: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Masukkan nilai:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            tampilan();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Tidak ada pilihan"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
