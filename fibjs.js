function fib_recurse(n){
    if (n == 1 || n == 0){
        return 1;
    }else{
        return fib_recurse(n - 1) + fib_recurse(n - 2);
    }
}

function fib_list(n){
    var array = [1, 1]; //javascript arrays are expandible by default

    for (var i = 2; i <= n; i++){
        array.push(array[i - 1] + array[i - 2]);
    }

    return array;
}

console.log(fib_recurse(20));
console.log(fib_list(20));
