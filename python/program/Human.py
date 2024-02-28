class Human:
    def __init__(self, nik, nama, jenis_kelamin, alamat, email):
        self._nik = nik
        self._nama = nama
        self._jenis_kelamin = jenis_kelamin
        self._alamat = alamat
        self._email = email

    def get_nik(self):
        return self._nik

    def get_nama(self):
        return self._nama

    def get_jenis_kelamin(self):
        return self._jenis_kelamin

    def get_alamat(self):
        return self._alamat

    def get_email(self):
        return self._email

    def set_nik(self, nik):
        self._nik = nik

    def set_nama(self, nama):
        self._nama = nama

    def set_jenis_kelamin(self, jenis_kelamin):
        self._jenis_kelamin = jenis_kelamin

    def set_alamat(self, alamat):
        self._alamat = alamat

    def set_email(self, email):
        self._email = email