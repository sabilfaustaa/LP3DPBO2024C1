from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, tipe_motor, kapasitas_tangki):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self._tipe_motor = tipe_motor
        self._kapasitas_tangki = kapasitas_tangki

    def get_tipe_motor(self):
        return self._tipe_motor

    def get_kapasitas_tangki(self):
        return self._kapasitas_tangki

    def set_tipe_motor(self, tipe_motor):
        self._tipe_motor = tipe_motor

    def set_kapasitas_tangki(self, kapasitas_tangki):
        self._kapasitas_tangki = kapasitas_tangki