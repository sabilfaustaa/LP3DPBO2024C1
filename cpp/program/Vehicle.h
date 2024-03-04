#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
    std::string platNomor;
    std::string merk;
    int tahunProduksi;
    std::string warna;

public:
    Vehicle(const std::string &platNomor, const std::string &merk, int tahunProduksi, const std::string &warna);
    virtual ~Vehicle() {}

    std::string getPlatNomor() const;
    void setPlatNomor(const std::string &value);

    std::string getMerk() const;
    void setMerk(const std::string &value);

    int getTahunProduksi() const;
    void setTahunProduksi(int value);

    std::string getWarna() const;
    void setWarna(const std::string &value);

    virtual void printData() const;
};

#endif // VEHICLE_H
