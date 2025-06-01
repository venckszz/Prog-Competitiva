# https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/torneio/

contador = 0

for _ in range(6):
    partida = str(input()).upper()
    if partida == "V":
        contador += 1

if contador >= 5:
    print(1)

elif 3 <= contador < 5:
    print(2)

elif 1 <= contador <3:
    print(3)

else:
    print(-1)

