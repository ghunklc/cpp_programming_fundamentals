#include <iostream>
#include <climits> // For data type limits like INT_MAX
#include <ctime> // For time calculations

int main(){
    // Display Program Header
    std::cout << "=======================================" << std::endl;
    std::cout << "   PRACTICAL DATA TYPE APPLICATION     " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program demonstrates appropriate" << std::endl; 
    std::cout << "usage of different data types for" << std::endl;
    std::cout << "various kinds of information." << std::endl << std::endl;
    
    // Program sections will go here
    
    // Age calculations practice
    // Add your code here for:
    // - Average age calculation
    // - Age difference calculation  
    // - Your personal age calculation
    short ali = 3; 
    short veli = 5;
    short ahmet = 11;

    double ortalamaYas = 0;
    ortalamaYas = (ali + veli + ahmet) / 3;
    std::cout << "Yaþ Ortalamasý: " << ortalamaYas << std::endl;

    short yasFarki = 0;
    yasFarki = veli - ali;

    std::cout << "Ali ile Veli'nin yas farki: " << yasFarki << std::endl;

    // Ham tarih deðerleri çok büyük olduðu için int kalmak zorunda 
    // (Çünkü 20040515 sayýsý short sýnýrýndan büyüktür)
    int dogumTarihi = 20040515; 
    int bugunTarihi = 20260928;

    // Ancak bu sayýlarý parçaladýðýmýzda elde ettiðimiz küçük deðerler 
    // short için mükemmel birer adaydýr! (Hafýza tasarrufu)
    short dogumYili = dogumTarihi / 10000;          // 2004
    short dogumAyi = (dogumTarihi / 100) % 100;    // 5
    short dogumGunu = dogumTarihi % 100;             // 15

    short bugunYili = bugunTarihi / 10000;          // 2026
    short bugunAyi = (bugunTarihi / 100) % 100;    // 9
    short bugunGunu = bugunTarihi % 100;             // 28

    // Yaþ deðeri de küçük bir sayý olduðu için short olabilir
    short yas = bugunYili - dogumYili;

    // Doðum günü henüz gelmediyse yaþý 1 azaltma kontrolü
    if (bugunAyi < dogumAyi || (bugunAyi == dogumAyi && bugunGunu < dogumGunu)) {
        yas--;
    }

    // Sonuçlarý ekrana yazdýrýyoruz
    std::cout << "Doðum Tarihi: " << dogumGunu << "/" << dogumAyi << "/" << dogumYili << std::endl;
    std::cout << "Bugünün Tarihi: " << bugunGunu << "/" << bugunAyi << "/" << bugunYili << std::endl;
    std::cout << "Hesaplanan Yaþ: " << yas << std::endl;

    return 0;
}