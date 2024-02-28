class ParkingLot:
    def __init__(self, kapasitas):
        self._kapasitas = kapasitas
        self._vehicles = []

    def get_kapasitas(self):
        return self._kapasitas

    def set_kapasitas(self, kapasitas):
        self._kapasitas = kapasitas

    def parkir_kendaraan(self, vehicle):
        if len(self._vehicles) < self._kapasitas:
            self._vehicles.append(vehicle)
            print("Parkir berhasil, total kendaraan sekarang:", len(self._vehicles))
        else:
            print("Parkir penuh.")

    def is_full(self):
        return len(self._vehicles) >= self._kapasitas

    def is_empty(self):
        return len(self._vehicles) == 0
