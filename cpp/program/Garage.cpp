#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.h"

using namespace std;

class Garage {
private:
    string nama;
    int luas;
    vector<Vehicle*> vehicles;

public:
    Garage(string nama, int luas) : nama(nama), luas(luas) {}

    string getNama() const {
        return nama;
    }

    int getLuas() const {
        return luas;
    }

    vector<Vehicle*> getVehicles() const {
        return vehicles;
    }

    void setNama(const string& newNama) {
        nama = newNama;
    }

    void setLuas(int newLuas) {
        luas = newLuas;
    }

    void parkirKendaraan(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
        cout << "Berhasil masukin mobil ke garasi " << nama << "." << endl;
    }

    bool keluarkanKendaraan(Vehicle* vehicle) {
        for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
            if (*it == vehicle) {
                vehicles.erase(it);
                cout << "Berhasil keluarin mobil dari garasi " << nama << "." << endl;
                return true;
            }
        }
        cout << "Kendaraan tidak ditemukan." << endl;
        return false;
    }
};
