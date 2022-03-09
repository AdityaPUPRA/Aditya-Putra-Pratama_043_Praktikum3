#include <iostream>
#include <string>

using namespace std;

int jumlah_karakter(char *text) {
int jumlah = 0;
while (*(text++) != '\0')
jumlah++;

 return jumlah;
}

int main() {
 char string[100];
 cout << "Tuliskan Kata : ";
 cin.getline(string, 100);
 cout << "Jumlah Karakter : " << jumlah_karakter(string);

 return 0;
}
