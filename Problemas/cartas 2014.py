def main():
    #cartas = input()
    #cartas = cartas.split()    
    cartas = list(map(int, input().split()))
    
    cartas_cre = sorted(cartas)
    cartas_dec = sorted(cartas,reverse = True)
    Cre = True
    Dec = True

    for i in range(len(cartas)):
            if cartas[i] != cartas_cre[i]:
                    Cre = False
            if cartas[i] != cartas_dec[i]:
                    Dec = False
                    
    if Cre == True:
        print('C',end = '')
    elif Dec == True:
        print('D',end = '')
    else:
        print('N',end = '')       
main()        