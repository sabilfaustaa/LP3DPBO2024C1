#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

class ParkingLot {
private:
    int kapasitas;
    vector<Vehicle*> vehicles;

public:
    ParkingLot(int kapasitas) : kapasitas(kapasitas) {}

    int getKapasitas() const {
        return kapasitas;
    }

    vector<Vehicle*> getVehicles() const {
        return vehicles;
    }

    void setKapasitas(int newKapasitas) {
        kapasitas = newKapasitas;
    }

    void parkirKendaraan(Vehicle* vehicle) {
        if (vehicles.size() < kapasitas) {
            vehicles.push_back(vehicle);
            cout << "Parkir berhasil, total kendaraan sekarang: " << vehicles.size() << endl;
        } else {
            cout << "Parkir penuh." << endl;
        }
    }

    bool isFull() const {
        return vehicles.size() >= kapasitas;
    }

    bool isEmpty() const {
        return vehicles.empty();
    }
};
