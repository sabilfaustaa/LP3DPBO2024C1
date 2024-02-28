class Garage:
    def __init__(self, nama, luas):
        self._nama = nama
        self._luas = luas
        self._vehicles = []

    def get_nama(self):
        return self._nama

    def get_luas(self):
        return self._luas

    def set_nama(self, nama):
        self._nama = nama

    def set_luas(self, luas):
        self._luas = luas

    def parkir_kendaraan(self, vehicle):
        self._vehicles.append(vehicle)
        print(f"Berhasil masukin mobil ke garasi {self._nama}.")

    def keluarkan_kendaraan(self, vehicle):
        if vehicle in self._vehicles:
            self._vehicles.remove(vehicle)
            print(f"Berhasil keluarin mobil ke garasi {self._nama}.")
            return vehicle
        else:
            print("Kendaraan tidak ditemukan.")