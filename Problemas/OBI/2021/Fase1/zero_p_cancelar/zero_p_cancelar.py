# https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/

entrada = int(input())
lista = []

for i in range(entrada):
    num = int(input())
    if num != 0:
        lista.append(num)
    else:
        lista.pop()

print(sum(lista))
