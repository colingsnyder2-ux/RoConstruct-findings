// from server: 90% by atomic.potato
struct S
{
    int f();
};

int g0;
int g1;
int g2;
int g3;

int S::f()
{
    *(int *)this = (int)&g3;
    *((int *)this + 1) = (int)&g2;
    *((int *)this + 6) = (int)&g1;
    *((int *)this + 7) = (int)&g0;
    return 0;
}
