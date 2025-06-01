from itertools import *

def checar(sigma):
     dick = {}
     for i in sigma:
             if i not in dick.keys():
                     dick[i] = 1
             else:
                     dick[i] += 1
     return dick

def batched(iterable, n, *, strict=False):
    if n < 1:
         raise ValueError('n must be at least one')
    iterator = iter(iterable)
    while batch := tuple(islice(iterator, n)):
        if strict and len(batch) != n:
            raise ValueError('batched(): incomplete batch')
        yield batch

tamanho = int(input())
entrada = input()
multiplos = [i for i in range(1, tamanho) if tamanho % i == 0]
if tamanho == 1:
    multiplos = [1]
combinacoes = list(list(batched(entrada, n)) for n in multiplos)

def solucao():
    for listas in combinacoes:
        lista = [checar(i) for i in listas]
        selecionada = checar(listas[0])
        teste = True
        for i in lista:
             if selecionada != i:
                  teste = False
                  break
        if teste:
             return listas[0]
            

    return '*'
print("".join(solucao()))
