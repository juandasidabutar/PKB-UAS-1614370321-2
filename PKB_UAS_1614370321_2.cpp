#include <iostream>
#include <conio>

void main(){
     int bil,bil2,hasil,pilih;
     char mn;
     menu:
          cout<<"==PROGRAM GERBANG LOGIKA=="<<endl;
          cout<<"1.AND"<<endl;
          cout<<"2.OR"<<endl;
          cout<<"3.NOT"<<endl;
          cout<<"\nMasukkan Pilihan =";cin>>pilih;
          
          switch(pilih){
           case 1:
                pilihan1:
                cout<<"\n====PROGRAM GERBANG LOGIKA AND===="<<endl;
                cout<<"Masukkan Bilangan Pertama=";cin>>bil1;
                cout<<"Masukkan Bilangan Kedua=";cin>>bil2;
              if(bil1>1 || bil1<0 || bil2<0){
                        gotoxy(27,13);cout<<"|t";
                        gotoxy(27,14);cout<<"|t";
                        gotoxy(1,11);goto pilihan1;//Memanggil label pilihan1;
                        }else{//akan dikerjakan bila bil1 dan bil2 bernilai
                          if(bil1==1 && bil2==1){
                                     cout<<"Hasil"<<bil1<<"."<<bil2<<"=1";
                                  }else{
                                        cout<<"Hasil"<<bil1<<"."<<2<<"=0";
                                        }
                                        }
                                        cout<<"|n|nTekan Sembarang Tombol Untuk Kembali Kemenu Utama ........";
                                  getche();
                                           clrscr();
                                           goto menu;
                                           break;
                                           
                                      case 2:
                                                 pilihan2:
                                            cout<<"\n====PROGRAM GERBANG LOGIKA OR===="<<endl;
                                            cout<<"Masukkan Bilangan Pertama = ";cin>>bil1;
                                            cout<<"Masukkan Bilangan Kedua = ";cin>>bil2;
                                            if(bil1>1 || bil1<0 || bil2>1 || bil2<0){
                                                      gotoxy(27,13);cout<<"\t";
                                                      gotoxy(27,14);cout<<"\t";
                                                      gotoxy(1,11);goto pilihan7; //Memanggil label pilihan7;
                                                      }else{
                                            if((bil1==0 && bil2==0) || (bil1==1 && bi2==1{
                                                        cout<<"Hasil "<<bil1<<"."<<bil2<<"+"<<bil1<<"'."<<bil2<<"' =0";
                                                      }else{
                                                        cout<<"Hasil "<<bil1<<"."<<bil2<<"+"<<bil1<<"'."<<bil2<<"' =1";
                                                        }
                                            }
                                             cout<<"\n\nTekan Sembarang Tombol Untuk Kembali Kemenu Utama........";
                                             getche();
                                             clrscr();
                                             goto menu;
                                             break;
                                             }
                                                   getche();
                                                   } ||
                                                              
