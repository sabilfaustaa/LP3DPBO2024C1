#include "Human.h"

Human::Human(string nik, string nama, string jenisKelamin, string alamat, string email)
    : nik(nik), nama(nama), jenisKelamin(jenisKelamin), alamat(alamat), email(email) {}

string Human::getNik() const { return nik; }
void Human::setNik(const string& value) { nik = value; }

string Human::getNama() const { return nama; }
void Human::setNama(const string& value) { nama = value; }

string Human::getJenisKelamin() const { return jenisKelamin; }
void Human::setJenisKelamin(const string& value) { jenisKelamin = value; }

string Human::getAlamat() const { return alamat; }
void Human::setAlamat(const string& value) { alamat = value; }

string Human::getEmail() const { return email; }
void Human::setEmail(const string& value) { email = value; }
