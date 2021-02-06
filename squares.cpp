#include<bits/stdc++.h>
#define rep(i) for(int __t=0;__t<i;++__t)

typedef long double ld;

int main(int argc, char *argv[])
{
    int n = 1;
    ld sum, square, e, _sum, _square;
    srand(time(NULL));
    while (n < 1<<24) // n from 1 to 8M
    {
        _sum = 0.0l;
        _square = 0.0l;
        // repeat 500 times
        rep(500)
        {
            sum = 0.0l;
            square = 0.0l;
            for(int _t=0;_t<n;++_t)
            {
                e = (ld)rand()/(ld)RAND_MAX; // positive number (0,1)
                sum += e;
                square += e*e;
            }
            _sum += sum*sum;
            _square += square;
        }
        printf("n=%d, f/n=%.10Lf, Factor %.1Lf, Square of Sum %.3Le, Sum of Squares %.3Le\n", n, _sum/_square/(ld)n, _sum/_square, _sum/500.0l, _square/500.0l);
        n<<=1;
    }
    return 0;
}