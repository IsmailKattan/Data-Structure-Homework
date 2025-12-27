#include <kontrol.hpp>

Kontrol::Kontrol()
{
    this->markline=0;
    veriDosyasiniOku();  // Read all data when Kontrol is created
}

void Kontrol::veriDosyasiniOku()
{
    tumSatirlar.clear();
    string line;
    fstream dosya;
    dosya.open("veri.txt",ios::in);  // Try lowercase first
    if (!dosya.is_open())
    {
        dosya.open("Veri.txt",ios::in);  // Try uppercase if lowercase fails
    }
    if (dosya.is_open())
    {
        while (getline(dosya,line))
        {
            tumSatirlar.push_back(line);
        }
        dosya.close();
    }
}

Sistem* Kontrol::sistemolustur()
{
    Sistem* sistem = new Sistem();
    for (int i = 1; i <= 100; i++)
    {
        Radix* organveri = new Radix();
        Organ* organ = new Organ();
        for (int j = 0; j < 20; j++)
        {
            if (markline < tumSatirlar.size())
            {
                // Use pre-loaded data instead of reading from file
                organ->ekle(organveri->kuyrukolusturvesirala(tumSatirlar[markline]));
                markline++;
            }
        }
        sistem->ekle(organ->avlmi());
        if (organ->avlmi())
            cout<<" ";
        else
            cout <<"#"; 
        
        delete organveri;
        delete organ;
    }
    return sistem;
}

Organizma* Kontrol::organizmaolustur()
{   
    Organizma* o = new Organizma();
    int toplamSatir = tumSatirlar.size();
    
    // Reset markline for each organism creation
    markline = 0;
    
    for (int i = 0; i < toplamSatir/2000; i++)
    {
        o->ekle(sistemolustur());
        cout <<endl;
    }
    o->yazdir();
    return o;
}
// string Kontrol:: oku()
// {
//     fstream dosya;
//     string line;
//     dosya.open("veriler.txt",ios::in);// read
//     if (dosya.is_open())
//     {   
        
//         int sayac = 0;
//         Sistem* sistem = new Sistem();
//         Radix* organveri = new Radix();
//         Organ* organ = new Organ();
//         Organizma* organizma = new Organizma();
//         while(getline(dosya,line))
//         {
//             line = line+" ";
//             organ->ekle(organveri->kuyrukolusturvesirala(line));
//             if((sayac+1)%20==0)
//             {
//                 //sistem->ekle(organ->avlmi());
//                 //organ->postorder();
//                 //sistem->yazdir();
//                 //cout<< endl;
//                 organ->postordercebosalt();
//                 cout << " fuck"<< endl;
                
//             }
//             if((sayac+1)%2000==0)
//             {
//                 sistem->yazdir();
//                 cout<<"n"<<endl;
//             }
//            sayac++;
//         }
        
            
        
//     }
//     dosya.close();
    
//     return line;
// }