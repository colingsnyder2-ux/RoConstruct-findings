// from server: 74% by atomic.potato
extern "C" void bad_cast_copy(void*, const void*);

struct S
{
    int f(S*);
    int v0;
    int v1;
    int v2;
};

int S::f(S* p)
{
    bad_cast_copy(this, p);
    v0 = 0x9c1364;
    v1 = p->v1;
    v2 = p->v2;
    return 0;
}
