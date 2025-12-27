#ifndef kontrol_hpp
#define kontrol_hpp

#include <organizma.hpp>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Kontrol
{
private:
    int markline;
    vector<string> tumSatirlar;  // Store all lines from file

public:
    Kontrol();
    ~Kontrol();
    void veriDosyasiniOku();  // Read all data from file
    Sistem* sistemolustur();
    Organizma* organizmaolustur();
    
};



#endif