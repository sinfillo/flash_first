from os import system

from random import randrange
from random import choice
n = randrange(100, 500)
l = randrange(1000, 5000)
if l % 2 != 0: l += 1
a = []
for j in range(n):
    a.append(randrange(0, l - 1))
a = list(set(a))
a.sort()
n = len(a)
with open("tourist_A.txt", "w") as fout:
    print(l, end = ' ', file=fout)
    print(n, file=fout)
    for x in a:
        print(x, file=fout)
