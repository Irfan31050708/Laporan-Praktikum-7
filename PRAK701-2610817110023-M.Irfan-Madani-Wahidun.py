front = input("Nama Depan : ")
back = input("Nama Belakang : ")

name = front + " " + back

length = 0
for alphabet in name:
    if alphabet != " ":
        length = length + 1

print("Nama Lengkap :", name)
print("Panjang Nama (tanpa spasi) :", length)