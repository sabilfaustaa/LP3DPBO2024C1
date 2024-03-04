#ifndef HUMAN_H
#define HUMAN_H

#include <string>

using namespace std;

class Human {
private:
    string nik;
    string nama;
    string jenisKelamin;
    string alamat;
    string email;

public:
    Human(string nik, string nama, string jenisKelamin, string alamat, string email);
    string getNik() const;
    void setNik(const string& value);

    string getNama() const;
    void setNama(const string& value);

    string getJenisKelamin() const;
    void setJenisKelamin(const string& value);

    string getAlamat() const;
    void setAlamat(const string& value);

    string getEmail() const;
    void setEmail(const string& value);
};

#endif
