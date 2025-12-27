#ifndef radix_hpp
#define radix_hpp


#include<doku.hpp>
#include<string>
#include<fstream>

class Radix
{
private:
    Doku* kuyruk;
    Doku* kuyruklar[10];  
    int sirala(Doku &siralanacak, int basamaksayisi);
    int kuvvetal(int taban,int kuvvet);
   
public:
    Radix();
    ~Radix();
    int kuyrukolusturvesirala(int satino);
    int kuyrukolusturvesirala(const string& line);  // New method that accepts string directly
    string oku(int satirno);
};
#endif