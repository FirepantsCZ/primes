import math
import time

g = input("kolik prvočísel?: ")
i = 0
a = 2
h = 2
k = math.sqrt(a)
p = 0
t = True

g = float(g)
i = float(i)
a = float(a)
h = float(h)
k = float(k)
p = float(p)

tic = time.perf_counter()
while i <= g:
    k = math.sqrt(a)
    if not k.is_integer():
        while h < k:
            p = a/h
            p = float(p)
            if p.is_integer():
                t = False
                break
            h += 1
    else:
        t = False
    if t:
        #print(a)
        i += 1
        h = 2
        a += 1
    else:
        a += 1
        h = 2
    t = True

toc = time.perf_counter()
print(f"Finished in {toc - tic:0.4f} seconds")
