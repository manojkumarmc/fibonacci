def fib_list(n): #python arrays are expandible by default
    array = [1, 1]
    for i in range(2, n + 1):
        array.append(array[i - 1] + array[i - 2])
    return array

def fib_recurse(n):
    if n == 1 or n == 0:
        return 1
    else:
        return fib_recurse(n - 1) + fib_recurse(n - 2)

print(fib_recurse(20))
print(fib_list(20))
