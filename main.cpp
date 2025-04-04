ヅ Ⓣ ⓔ ⓜ ⓤ ⓡ ⓒ ⓗ ⓵ ⓚ, [16.02.2024 17:23]
#include<iostream>
using namespace std;
int main()
{
  bosh:
  int a,s=0,w,y,e,b,q,c,d,v;
  system("color 3");
    cout << "\t\t\t\tAssalomu Aleykum!\n\n";
    cout << "\t\t\t    < Timurbek > Restourant\n\n";
    cout << "\t\tMENU\n\n";
    cout << "1. Sho'rva\n";
    cout << "2. Shashlik\n";
    cout << "3. Somsa\n";
    cout << "4. Osh\n";
    cout << "5. Manti\n";
    cout << "6. Go'sht\n";
    cout << "7. Tabaka\n";
    cout << "8. Salatlar\n";
    cout << "9. Ichimliklar\n";
   cout << "10. Non - maxsuloti\n\n";
   cout << "0. Chiqish\n\n";
    cin >> a ;
    system("cls");
  switch(a)
  {
    shorvaTur:
      case 1: {
      system("color a");
        cout << "\t\tSHO'RVA\n\n";
        cout << "1. Sho'rva\n";
        cout << "2. Qaynatma Sho'rva\n";
        cout << "3. G'ilak Sho'rva\n";
        cout << "4. Karam Sho'rva\n\n";
        cout << "0. Orqaga\n\n";
      cin >> b;
      system("cls");
      system("color b");
      switch(b)
      {
        shorva:
        case 1:{
          cout << "1. Sho'rva 1 porsiyasi    - 22 000 so'm\n\n";
          cout << "0. Orqaga\n\n";
          cin >> c ;
          system("cls");
          system("color 4");
          switch(c)
          {
            case 1 : {
              cout << "Sho'rva 1 porsiyasi    - 22 000 so'm\n";
              cout << "Nechi porsiya olasiz - ";
              cin >> w ;
              system("cls");
              s = w * 22000 ;
              e += s ;
              shorvaNarx:
              system("color d");
              cout << w << " porsiya sho'rva " << s << " so'm\n\n";
              cout << "Yana biror nima harid qilasizmi?\n";
              cout << "1. Xa\n";
              cout << "2. Yo'q\n";
              cout << "3. Menuga qaytish\n\n";
              cin >> d ;
              system("cls");
              switch(d)
              {
                case 1:goto shorva;break;
                case 2:{
                  system("color 6");
                  cout << "Haridingiz uchun raxmat!\n";
                  cout << "< Timurbek > Restourant\n";
                  cout << "Ummumiy xisob: " << e << " so'm\n";
                  return 0 ; 
                }break;
                case 3:goto bosh;break;
                default: goto shorvaNarx;
              }
              
            }
            case 0 : goto shorvaTur;
            default: goto shorva;
          }
        }break;
//        case 10:
//        default:goto shorvaTur;
      }
      
//      switch 2
      
      cin >> q;
      system("cls");
      system("color b");
      switch(q)
      {
        shorvaIkki:
        case 2:{
          cout << "1. Qaynatma sho'rva 1 porsiyasi    - 32 000 so'm\n\n";
          cout << "0. Orqaga\n\n";
          cin >> y;
          system("cls");
          system("color 4");
          switch(y)
          {
            case 1 : {
              cout << "Sho'rva 1 porsiyasi    - 32 000 so'm\n";
              cout << "Nechi porsiya olasiz - ";
              cin >> w ;
              system("cls");
              s = w * 32000 ;
              e += s ;
              shorvaNarxIkki:
              system("color d");
              cout << w << " porsiya qaynatma sho'rva " << s << " so'm\n\n";
              cout << "Yana biror nima harid qilasizmi?\n";
              cout << "1. Xa\n";
              cout << "2. Yo'q\n";
              cout << "3. Menuga qaytish\n\n";
              cin >> v;
              system("cls");
              switch(v)
              {
                case 1:goto shorvaIkki;break;
                case 2:{
                  system("color 56");
                  cout << "Haridingiz uchun raxmat!\n";
                  cout << "< Timurbek > Restourant\n";
                  cout << "Ummumiy xisob: " << e << " so'm\n";
                  return 0 ; 
                }break;
                case 3:goto bosh;break;
                default: goto shorvaNarxIkki;
              }
              
            }
            case 0 : goto shorvaTur;
            default: goto shorvaIkki;
          }
        }break;
        default:goto shorvaTur;
      }

//      switch 3
      
      int k;
      cin >> k;
      system("cls");
      system("color b");
      switch(k)
      {
        shorvaUch:
        case 3:{
          cout << "1. Qaynatma sho'rva 1 porsiyasi    - 32 000 so'm\n\n";
          cout << "0. Orqaga\n\n";
          int m;
          cin >> m;
          system("cls");
          system("color 4");
          switch(m)
          {
            case 1 : {
              cout << "Sho'rva 1 porsiyasi    - 32 000 so'm\n";
              cout << "Nechi porsiya olasiz - ";
              cin >> w ;
              system("cls");
              s = w * 32000 ;
              e += s ;
              shorvaNarxUch:
              system("color d");
              cout << w << " porsiya qaynatma sho'rva " << s << " so'm\n\n";
              cout << "Yana biror nima harid qilasizmi?\n";
              cout << "1. Xa\n";
              cout << "2. Yo'q\n";
              cout << "3. Menuga qaytish\n\n";
              int n;
              cin >> n;
              system("cls");
              switch(n)
              {
                case 1:goto shorvaUch;break;
                case 2:{
                  system("color 56");
                  cout << "Haridingiz uchun raxmat!\n";
                  cout << "< Timurbek > Restourant\n";
                  cout << "Ummumiy xisob: " << e << " so'm\n";
                  return 0 ; 
                }break;
                case 3:goto bosh;break;
                default: goto shorvaNarxUch;
              }
              
            }
            case 0 : goto shorvaTur;
            default: goto shorvaUch;
          }
        }break;
        default:goto shorvaTur;
      }
      default: goto bosh;break;
  }
}
}