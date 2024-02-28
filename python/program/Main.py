from Human import Human
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

def print_header(title):
    print("============================================")
    print(f"{title}")
    print("============================================")

def print_kendaraan_detail(vehicle):
    vehicle.print_data()

    if isinstance(vehicle, Car):
        print(f"Jumlah Kursi: {vehicle.get_jumlah_kursi()}")
        print(f"Jumlah Pintu: {vehicle.get_jumlah_pintu()}")
    elif isinstance(vehicle, Motorcycle):
        print(f"Tipe Motor: {vehicle.get_tipe_motor()}")
        print(f"Kapasitas Tangki: {vehicle.get_kapasitas_tangki()}")
    print("============================================")

def Main():
    # instansiasi garage dan parking lot
    garasiKopma = Garage("Garasi Kopma", 200)
    parkingLot = ParkingLot(100)

    # instansiasi human dan kendaraannya dimasukan sebagai parameter object kedalam object car
    pemilik1 = Human("1234540000000001", "Sabil", "Laki-laki", "Bandung", "ahmaddhani@app.com")
    pemilik2 = Human("1234550000000002", "Fathia", "Perempuan", "Jakarta Barat", "bcl@app.com")
    pemilik3 = Human("1234560000000003", "Raisa Andriana", "Perempuan", "Jakarta Timur", "raisa@app.com")

    listMobil = [
        Car("B1234XYZ", "Toyota", 2020, "Red", 4, 4, pemilik1),
        Car("D1234YXZ", "Wuling", 2022, "Pink", 2, 2, pemilik2),
        Car("A4321ZYX", "Honda", 2018, "Blue", 5, 4, pemilik3),
        Car("B1234XYZ", "Toyota", 2020, "Merah", 4, 4, pemilik1),
        Car("D5678ABC", "Honda", 2019, "Hitam", 5, 4, pemilik2),
        Car("C4321ZYX", "Suzuki", 2021, "Putih", 4, 4, pemilik3)
    ]
    listMotor = [
        Motorcycle("D5678ABC", "Honda", 2019, "Black", "Sport", 15),
        Motorcycle("C8765DCB", "Yamaha", 2021, "White", "Matic", 5)
    ]

    # masukan ke array object kendaraan di vehicle
    for car in listMobil:
        garasiKopma.parkir_kendaraan(car)
    for motorcycle in listMotor:
        garasiKopma.parkir_kendaraan(motorcycle)
    
    # lihat kendaraan dalam garasi
    print_header("Kendaraan dalam Garasi Kopma")
    for vehicle in garasiKopma._vehicles:
        print_kendaraan_detail(vehicle)
    
    # parking lot beda sendiri tidak ada korelasi ini ceritanya pemindahan kendaraan dari garage ke parking lot
    for vehicle in garasiKopma._vehicles[:3]:
        if not parkingLot.is_full():
            kendaraan_dikeluarkan = garasiKopma.keluarkan_kendaraan(vehicle)
            if kendaraan_dikeluarkan:
                parkingLot.parkir_kendaraan(kendaraan_dikeluarkan)
                print(f"{kendaraan_dikeluarkan.get_plat_nomor()} Telah Dipindahkan ke Parking Lot.")
        else:
            print("Tempat Parkir Penuh.")

    print(f"")
    print_header("Parking Lot")
    for vehicle in parkingLot._vehicles:
        print_kendaraan_detail(vehicle)

    print(f"")
    print_header("Garasi Kopma setelah Pemindahan")
    for vehicle in garasiKopma._vehicles:
        print_kendaraan_detail(vehicle)

if __name__ == "__main__":
    Main()