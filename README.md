# fibonacci
Fibonacci in lots of different languages

`fib_recurse` is the recursive, slow version.
`fib_optimized` is the fast, iterative version using the language's dynamically sized arrays.

Each file, when ran, prints the 20th fibonacci number from both versions of the method. Weird specicifities of the language should be explained in comments.

If you want to add a new language and/or improve an implementation for a current language, please do! Make sure to keep everything generally standardized though.

### Python Example:
```python
    def fib_optimized(n):
        array = [1, 1]
        for i in range(2, n + 1):
            array.append(array[i - 1] + array[i - 2])
        return array[n]

    def fib_recurse(n):
        if n == 1 or n == 0:
            return 1
        else:
            return fib_recurse(n - 1) + fib_recurse(n - 2)

    print(fib_optimized(20))
    print(fib_recurse(20))
```
