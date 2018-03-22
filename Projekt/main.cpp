#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
class TCD
{
    private:
    class Tutwor
    {
        public:
       string nazwa;
       string autor;
       string wykonawca;
       float czas;
    };

    class cdrom
    {
        public:
      string tytul;
      string wykon;
      string wydaw;
      int rok;
      float cena;
      class Tutwor utwory[10];
    };

     class cdrom plyty[10];

     int ilecd=0;
     int ileutw[10];


    public:

        void dodaj() //dodaje cd z utworami
{
    system("cls");
    int h,i,j,k;
    cout<<"==============DODAJ============="<<endl;
    cout<<endl<<"\n podaj liczbe plyt do dodania: "; cin>> h; ilecd=ilecd+h;
    for(i=1;i<=ilecd;i++)
    {
         cout<<endl<< " Podaj tytul albumu: ";
          cin >> plyty[i].tytul;
         cout<<endl<< " Podaj nazwe wydawcy: ";        cin>> plyty[i].wydaw;
         cout<<endl<< " Podaj nazwe wykonawcy: ";      cin>> plyty[i].wykon;
         cout<<endl<< " Podaj rok wydania plyty: ";    cin>> plyty[i].rok;
         cout<<endl<< " Podaj cene: ";                 cin>> plyty[i].cena;
         cout<<endl<< " ile utworow zawiera plyta??: "; cin>> k;
         ileutw[i]=k;


         for (j=1;j<=k;j++)
         {
             cout<<endl<< j; cout<<endl<< "). utwor \n";
             cout<<endl<< " podaj tytul utworu ";     cin>> plyty[i].utwory[j].nazwa;
             cout<<endl<< " podaj autora utworu ";    cin>> plyty[i].utwory[j].autor;
             cout<<endl<< " podaj wykonawce utworu "; cin>> plyty[i].utwory[j].wykonawca;
             cout<<endl<< " podaj czas utworu ";      cin>> plyty[i].utwory[j].czas;
         }
    }
}


        void pokaz() //pokazuje cd z utworami
     {
       system("cls");
      int i,j;
       for(i=1;i<=ilecd;i++)
       {
         cout<< "==============CD("<<i<< ")==============";
          cout<<endl<<"tytul plyty: "<< plyty[i].tytul;
          cout<<endl<<"wydawca plyty: "<<plyty[i].wydaw;
          cout<<endl<<"wykonawca plyty: "<<plyty[i].wykon;
          cout<<endl<<"rok wydania plyty: "<<plyty[i].rok;
          cout<<endl<<"cena plyty: "<<plyty[i].cena<<endl;
         for (j=1;j<=ileutw[i];j++)
         {
              cout<< j;
              cout<< ") utwor "<<plyty[i].utwory[j].nazwa;
              cout<<endl<< "   autor: "<<plyty[i].utwory[j].autor;
              cout<<endl<< "   wykonawca: "<<plyty[i].utwory[j].wykonawca;
              cout<<endl<< "   czas: "<<plyty[i].utwory[j].czas<<endl;

         }
       }
     }

       void sred() //srednia utworow;
     {
        system("cls");
        cout<< "=============SREDNIA============"<<endl;
        int i;
       float sr,sum;
        sr=0; sum=0;
        for(i=1;i<=ilecd;i++)
        {
            sum=(sum+plyty[i].cena);
        }
        sr=(sum/ilecd);
        cout<<endl<< "srednia cena albumow to "<< sr;
     }
};

int main()
{
    int o,t;
    TCD t1;
    for (;;)
    {
        cout<<endl<< " =============MENU==============";
        cout<<endl<< "|           [1] dodaj           |";
        cout<<endl<< "|           [2] pokaz           |";
        cout<<endl<< "|           [3] srednia         |";
        cout<<endl<< "|           [4] koniec          |";
        cout<<endl<< " ===============================";

        cout<<endl<< " Wybierz: ";
        cin >> o;
        printf("\n");

        switch(o)
        {
        case 1: //dodaje rekord
            {
               t1.dodaj();break;
            }
        case 2: //pokazuje rekordy
            {
               t1.pokaz();break;
            }
            case 3: //pokazuje rekordy
            {
               t1.sred();break;
            }
        case 4: //koniec
            {
               return 0;break;
            }
        default: cout << "Nie ma takiej opcji!\n";
        }
    getchar();getchar();
    system("cls");
    }
    return 0;
}
