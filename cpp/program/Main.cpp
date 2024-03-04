#include <iostream>
#include <vector>
#include "Human.h"
#include "Car.h"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

using namespace std;

void printHeader(const string& title) {
    cout << "============================================" << endl;
    cout << title << endl;
    cout << "============================================" << endl;
}

void printVehicleDetail(Vehicle* vehicle) {
    vehicle->printData();

    Car* car = dynamic_cast<Car*>(vehicle);
    if (car) {
        cout << "Jumlah Kursi: " << car->getJumlahKursi() << endl;
        cout << "Jumlah Pintu: " << car->getJumlahPintu() << endl;
    }

    Motorcycle* motorcycle = dynamic_cast<Motorcycle*>(vehicle);
    if (motorcycle) {
        cout << "Tipe Motor: " << motorcycle->getTipeMotor() << endl;
        cout << "Kapasitas Tangki: " << motorcycle->getKapasitasTangki() << endl;
    }

    cout << "============================================" << endl;
}

int main() {
    Garage garasiKopma("Garasi Kopma", 200);
    ParkingLot parkingLot(100);

    Human pemilik1("1234540000000001", "Sabil", "Laki-laki", "Bandung", "ahmaddhani@app.com");
    Human pemilik2("1234550000000002", "Fathia", "Perempuan", "Jakarta Barat", "bcl@app.com");
    Human pemilik3("1234560000000003", "Raisa Andriana", "Perempuan", "Jakarta Timur", "raisa@app.com");

    vector<Car*> listMobil = {
        new Car("B1234XYZ", "Toyota", 2020, "Red", 4, 4, &pemilik1),
        new Car("D1234YXZ", "Wuling", 2022, "Pink", 2, 2, &pemilik2),
        new Car("A4321ZYX", "Honda", 2018, "Blue", 5, 4, &pemilik3),
        new Car("B1234XYZ", "Toyota", 2020, "Merah", 4, 4, &pemilik1),
        new Car("D5678ABC", "Honda", 2019, "Hitam", 5, 4, &pemilik2),
        new Car("C4321ZYX", "Suzuki", 2021, "Putih", 4, 4, &pemilik3)
    };

    vector<Motorcycle*> listMotor = {
        new Motorcycle("D5678ABC", "Honda", 2019, "Black", "Sport", 15),
        new Motorcycle("C8765DCB", "Yamaha", 2021, "White", "Matic", 5)
    };

    for (auto car : listMobil) {
        garasiKopma.parkirKendaraan(car);
    }
    for (auto motorcycle : listMotor) {
        garasiKopma.parkirKendaraan(motorcycle);
    }

    printHeader("Kendaraan dalam Garasi Kopma");
    for (auto vehicle : garasiKopma.getVehicles()) {
        printVehicleDetail(vehicle);
    }

    cout << endl;
    printHeader("Pemindahan Kendaraan ke Parking Lot");
    bool isParkingFull = false;
    int movedVehicles = 0;

    for (auto vehicle : garasiKopma.getVehicles()) {
        if (!isParkingFull && movedVehicles < 3) {
            if (garasiKopma.keluarkanKendaraan(vehicle)) {
                parkingLot.parkirKendaraan(vehicle);
                cout << vehicle->getPlatNomor() << " Telah Dipindahkan ke Parking Lot." << endl;
                movedVehicles++;
                
                if (parkingLot.isFull()) {
                    isParkingFull = true;
                    cout << "Tempat Parkir Penuh." << endl;
                }
            }
        }
    }

    cout << endl;
    printHeader("Parking Lot");
    for (auto vehicle : parkingLot.getVehicles()) {
        printVehicleDetail(vehicle);
    }

    cout << endl;
    printHeader("Garasi Kopma setelah Pemindahan");
    for (auto vehicle : garasiKopma.getVehicles()) {
        printVehicleDetail(vehicle);
    }

    for (auto car : listMobil) {
        delete car;
    }
    for (auto motorcycle : listMotor) {
        delete motorcycle;
    }

    return 0;
}
