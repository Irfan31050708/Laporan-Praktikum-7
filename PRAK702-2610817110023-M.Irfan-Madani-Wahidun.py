word = input()
length = len(word)
palindrom = True

for i in range(length // 2):
    if word[i] != word[length - 1 - i]:
        palindrom = False

if palindrom:
    print("Kata '" + word + "' adalah palindrom")
else:
    print("Kata '" + word + "' bukan palindrom")