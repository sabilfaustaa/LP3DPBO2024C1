#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "Human.h"

using namespace std;

class Car : public Vehicle {
private:
    int jumlahKursi;
    int jumlahPintu;
    Human* pemilik;

public:
    Car(string platNomor, string merk, int tahunProduksi, string warna, int jumlahKursi, int jumlahPintu, Human* pemilik);
    ~Car();

    int getJumlahKursi() const;
    void setJumlahKursi(int jumlahKursi);

    int getJumlahPintu() const;
    void setJumlahPintu(int jumlahPintu);

    Human* getPemilik() const;
    void setPemilik(Human* pemilik);

    void printData() const override;
};

#endif // CAR_H
