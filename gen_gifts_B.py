from os import system

from random import randrange
from random import choice

n = 1000000
a = []
for j in range(n):
    a.append(randrange(-1000000000, 1000000000))
with open("gifts_B.txt", "w") as fout:
    print(n, file=fout)
    for x in a:
        print(x, file=fout)
