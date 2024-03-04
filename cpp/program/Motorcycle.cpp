#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle {
private:
    string tipeMotor;
    int kapasitasTangki;

public:
    Motorcycle(string platNomor, string merk, int tahunProduksi, string warna, string tipeMotor, int kapasitasTangki)
    : Vehicle(platNomor, merk, tahunProduksi, warna), tipeMotor(tipeMotor), kapasitasTangki(kapasitasTangki) {
    }
   
    string getTipeMotor() const {
        return tipeMotor;
    }

    int getKapasitasTangki() const {
        return kapasitasTangki;
    }
   
    void setTipeMotor(const string& newTipeMotor) {
        tipeMotor = newTipeMotor;
    }

    void setKapasitasTangki(int newKapasitasTangki) {
        kapasitasTangki = newKapasitasTangki;
    }
};
