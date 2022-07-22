from os import system

from random import randrange
from random import choice

for i in range(1, 100):
    n = randrange(3, 100)
    a = []
    for j in range(n):
        a.append(randrange(-1000000000, 1000000000))
    with open("in.txt", "w") as fout:
        print(n, file=fout)
        for x in a:
            print(x, file=fout)
    zapusk1 = "./gifts_slow_ < in.txt > out1.txt"
    zapusk2 = "./gifts_fast_ < in.txt > out2.txt"
    system(zapusk1)
    system(zapusk2)
    ans1 = open("out1.txt", "r").readline().strip()
    ans2 = open("out2.txt", "r").readline().strip()
    if (ans1 != ans2):
        print(ans1, ans2)
        exit(0)
