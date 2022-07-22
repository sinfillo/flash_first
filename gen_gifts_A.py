from os import system

from random import randrange
from random import choice

n = randrange(20, 100)
a = []
for j in range(n):
    a.append(randrange(-10000, 10000))
with open("gifts_A.txt", "w") as fout:
    print(n, file=fout)
    for x in a:
        print(x, file=fout)
