function fib_recurse(n){
    if (n == 1 || n == 0){
        return 1;
    }else{
        return fib_recurse(n - 1) + fib_recurse(n - 2);
    }
}

function fib_optimized(n){
    var array = [1, 1];

    for (var i = 2; i <= n; i++){
        array.push(array[i - 1] + array[i - 2]);
    }

    return array[n];
}

console.log(fib_recurse(20));
console.log(fib_optimized(20));
