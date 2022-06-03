int sqrtN(long long int N)

{

    if (N == 0)
        return 0;

    int s = 1, e = 1e8;

    int ans = 0;

    while (s <= e)
    {

        long long int m = s + (e - s) / 2;

        if (m * m <= N)
        {

            ans = m;

            s = m + 1;
        }

        else
        {

            e = m - 1;
        }
    }

    return ans;
}