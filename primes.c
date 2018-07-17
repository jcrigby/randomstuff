#include <stdio.h>

#define BLKSIZE 10
#define PRM_SZ_INC 100

struct p {
    int *primes;	/* all primes found */
    int sz_primes;	/* size of primes storage */
    int nr_primes;	/* number of primes found */
    int max_prime;	/* largest prime found */
    char block[BLKSIZE];
    int blkstart;
    int blknext;	/* index in block of next candidate */
};

static void eliminate_prime_mults(struct p *ps, int pm)
{

}

static void blkinit(struct p *ps)
{
    int i, pm;

    memset(ps->block, 1, BLKSIZE);
    for (i = 0; i < nr_primes; i++) {
	pm = ps->primes[i];
	eliminate_prime_mults(ps, pm);
    }

}

static struct p *pinit(void)
{
    struct p *ps;

    ps = calloc(1, sizeof(*ps));

    /* ignore that calloc zero'd out stuff */

    ps->primes = calloc(PRM_SZ_INC, sizeof(*ps->primes));
    ps->sz_primes = PRM_SZ_INC;

    ps->nr_primes = 0;
    ps->max_prime = 0;

    blkinit(ps);
    ps->blkstart = 0;
    ps->blknext = 0;

    return ps;
}

static int pnext(struct p *ps)
{
}

int next(void); /* get next prime */

void main()
{
    struct p *ps;

    ps = pinit();

    printf("pnext: %d\n", pnext(ps));
    printf("pnext: %d\n", pnext(ps));
    printf("pnext: %d\n", pnext(ps));
}

