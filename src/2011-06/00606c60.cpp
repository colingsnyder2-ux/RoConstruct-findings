// from server: 65% by atomic.potato
extern "C" void G1_func_00606b80(void *, const char *);

struct S
{
    int f(const char *);
};

int S::f(const char *p)
{
    char local[28];
    G1_func_00606b80(local, "Duplicate");
    G1_func_00606b80(this, p);
    *(void **)this = (void *)0x00a9325c;
    return (int)this;
}
