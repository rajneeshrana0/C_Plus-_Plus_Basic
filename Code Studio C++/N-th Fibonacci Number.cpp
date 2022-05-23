int fibonacciNumber(int n)
{
    // Write your code here.
    int mod = (int)1e9 + 7;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++)
    {

        // The variable c stores the ith Fibonacci Number.
        c = (a + b) % mod;

        // Updating values of a and b.
        a = b;
        b = c;
    }

    // The variable b stores the nth Fibonacci Number.
    return b;
}