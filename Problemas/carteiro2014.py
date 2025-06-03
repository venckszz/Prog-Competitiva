def main():
    NM = list(map(int,input().split()))
    casas = list(map(int,input().split()))
    casasen = list(map(int,input().split()))
    temp = 0
    if len(casasen) == 1:
        print(temp,end = '')
        return
    for i in range(1,len(casasen)):
       #percorrer casassen
       if casasen[i] != casasen[i-1]:
           temp += 1
       for j in range(NM[0]):
           #percorrer casas
           if casas[j] < casasen[i] and casas[j] > casasen[i-1]:
               temp += 1
    temp *= 2
    print(temp,end = '')

main()

