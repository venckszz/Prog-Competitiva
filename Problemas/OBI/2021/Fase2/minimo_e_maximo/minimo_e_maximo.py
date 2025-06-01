somadigitos = int(input())
a = list(filter(lambda n: sum(map(int, str(n))) == somadigitos, range(int(input()), int(input())+1)))
print(f"{a[0]}\n{a[-1]}")

