#include <stdio.h>

#define BLKSIZE 100
#define PRM_SZ_INC 100

struct p {
	int *primes;	/* all primes found */
	int sz_primes;	/* size of primes storage */
	int nr_primes;	/* number of primes found */
	int max_prime;	/* largest prime found */
	int block[BLKSIZE];
	int blkstart;
};

static struct p *pinit(void)
{
	struct p *ps;

	ps = calloc(1, sizeof(*ps));

	/* ignore that calloc zero'd out stuff */

	ps->primes = calloc(PRM_SZ_INC, sizeof(*ps->primes));
	ps->sz_primes = PRM_SZ_INC;

	ps->nr_primes = 0;
	ps->max_prime = 0;

	ps->blkstart = 0;

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

