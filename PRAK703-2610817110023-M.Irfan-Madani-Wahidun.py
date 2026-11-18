sentence = input("Kalimat : ")
vocal = 0
consonant = 0

for huruf in sentence.lower():
    if huruf in "aiueo":
        vocal = vocal + 1
    elif huruf >= "a" and huruf <= "z":
        consonant = consonant + 1

print("Jumlah Vokal :", vocal)
print("Jumlah Konsonan :", consonant)
