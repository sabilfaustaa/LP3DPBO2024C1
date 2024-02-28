class Vehicle:
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self._plat_nomor = plat_nomor
        self._merk = merk
        self._tahun_produksi = tahun_produksi
        self._warna = warna

    def get_plat_nomor(self):
        return self._plat_nomor

    def get_merk(self):
        return self._merk

    def get_tahun_produksi(self):
        return self._tahun_produksi

    def get_warna(self):
        return self._warna

    def set_plat_nomor(self, plat_nomor):
        self._plat_nomor = plat_nomor

    def set_merk(self, merk):
        self._merk = merk

    def set_tahun_produksi(self, tahun_produksi):
        self._tahun_produksi = tahun_produksi

    def set_warna(self, warna):
        self._warna = warna

    def print_data(self):
        print(f"Plat Nomor: {self._plat_nomor}")
        print(f"Merk: {self._merk}")
        print(f"Tahun Produksi: {self._tahun_produksi}")
        print(f"Warna: {self._warna}")
