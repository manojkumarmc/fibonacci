from itertools import islice

def fib():
    a, b = 0 ,1
    while True:
        a,b = b, a+b
        yield b

output = islice(fib(), 0, 10)

for o in output:
    print(o)
