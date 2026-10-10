// from server: 36% by atomic.potato
struct S
{
    int *f(int);
};

int *S::f(int x)
{
    int **p = *(int ***)this;
    return p[x];
}
