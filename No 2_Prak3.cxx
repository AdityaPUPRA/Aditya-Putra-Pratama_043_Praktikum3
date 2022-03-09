
#include <iostream> 
#include <cctype> 
#include <cstring>

using namespace std;

int main(void)
{
   char karakter[20], karakter_baru[20];
   
   cout <<"=========================\n";
   cout << "Program Merubah Karakter Huruf Kecil ke Huruf Besar\n";
   cout <<"==========================\n";
   cout << "Masukkan Teks : "; cin>> karakter;

   for (int i=0; i<strlen(karakter); i++) {
     if(karakter[i] >= 'a' && karakter[i] <= 'z'){
            karakter_baru[i] = toupper(karakter[i]);
      }
      else{
            karakter_baru[i] = tolower(karakter[i]);
      }
   }

   cout << "Hasil : " <<karakter_baru;

   return 0;   
}
