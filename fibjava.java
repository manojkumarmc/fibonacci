import java.util.ArrayList;
import java.util.Arrays;

class fibjava{
    public static void main(String[] args){
        System.out.println(fib_recurse(20));
        System.out.println(Arrays.toString(fib_list(20)));
    }

    public static int fib_recurse(int n){
        if (n == 1 || n == 0)
            return 1;
        else
            return fib_recurse(n - 1) + fib_recurse(n - 2);
    }

    public static int[] fib_list(int n){
        int[] list = new int[n + 1];
        list[0] = 1;
        list[1] = 1;

        for (int i = 2; i <= n; i++){
            list[i] = list[i - 1] + list[i - 2];
        }

        return list;
    }
}
