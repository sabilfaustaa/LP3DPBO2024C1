#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string &platNomor, const std::string &merk, int tahunProduksi, const std::string &warna)
    : platNomor(platNomor), merk(merk), tahunProduksi(tahunProduksi), warna(warna) {}

std::string Vehicle::getPlatNomor() const {
    return platNomor;
}

void Vehicle::setPlatNomor(const std::string &value) {
    platNomor = value;
}

std::string Vehicle::getMerk() const {
    return merk;
}

void Vehicle::setMerk(const std::string &value) {
    merk = value;
}

int Vehicle::getTahunProduksi() const {
    return tahunProduksi;
}

void Vehicle::setTahunProduksi(int value) {
    tahunProduksi = value;
}

std::string Vehicle::getWarna() const {
    return warna;
}

void Vehicle::setWarna(const std::string &value) {
    warna = value;
}

void Vehicle::printData() const {
    std::cout << "Plat Nomor: " << platNomor << std::endl;
    std::cout << "Merk: " << merk << std::endl;
    std::cout << "Tahun Produksi: " << tahunProduksi << std::endl;
    std::cout << "Warna: " << warna << std::endl;
}
