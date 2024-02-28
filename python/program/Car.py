from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu, pemilik):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self._jumlah_kursi = jumlah_kursi
        self._jumlah_pintu = jumlah_pintu
        self.pemilik = pemilik

    def get_jumlah_kursi(self):
        return self._jumlah_kursi

    def get_jumlah_pintu(self):
        return self._jumlah_pintu

    def set_jumlah_kursi(self, jumlah_kursi):
        self._jumlah_kursi = jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):
        self._jumlah_pintu = jumlah_pintu

    def print_data(self):
        print(f"Plat Nomor: {self._plat_nomor}")
        print(f"Merk: {self._merk}")
        print(f"Tahun Produksi: {self._tahun_produksi}")
        print(f"Warna: {self._warna}")
        print(f"Jumlah Kursi: {self._jumlah_kursi}")
        print(f"Pemilik: {self.pemilik.get_nama()}")
        print(f"NIK: {self.pemilik.get_nik()}")
        print(f"Alamat: {self.pemilik.get_alamat()}")
