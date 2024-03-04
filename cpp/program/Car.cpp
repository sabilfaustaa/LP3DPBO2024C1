#include "Car.h"
#include <iostream>

Car::Car(string platNomor, string merk, int tahunProduksi, string warna, int jumlahKursi, int jumlahPintu, Human* pemilik)
: Vehicle(platNomor, merk, tahunProduksi, warna), jumlahKursi(jumlahKursi), jumlahPintu(jumlahPintu), pemilik(pemilik) {}

Car::~Car() {}

int Car::getJumlahKursi() const {
    return jumlahKursi;
}

void Car::setJumlahKursi(int jumlahKursi) {
    this->jumlahKursi = jumlahKursi;
}

int Car::getJumlahPintu() const {
    return jumlahPintu;
}

void Car::setJumlahPintu(int jumlahPintu) {
    this->jumlahPintu = jumlahPintu;
}

Human* Car::getPemilik() const {
    return pemilik;
}

void Car::setPemilik(Human* pemilik) {
    this->pemilik = pemilik;
}

void Car::printData() const {
    Vehicle::printData();
    cout << "Jumlah Kursi: " << jumlahKursi << "\n";
    cout << "Jumlah Pintu: " << jumlahPintu << "\n";
    cout << "Pemilik: " << pemilik->getNama() << "\n";
    cout << "NIK: " << pemilik->getNik() << "\n";
    cout << "Alamat: " << pemilik->getAlamat() << "\n";
}
