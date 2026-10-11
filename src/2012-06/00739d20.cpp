// from server: 85% by atomic.potato
extern "C" void *G1_func_00739b90(void *, void *, void *);

struct StarterGuiService
{
    void *f(void *, void *);
};

void *StarterGuiService::f(void *a, void *b)
{
    if (*(unsigned char *)((char *)this + 13) != 0)
        return G1_func_00739b90(a, b, this);
    *(long *)a = 0;
    *(long *)((char *)a + 4) = 0;
    *(long *)((char *)a + 8) = 0;
    *(long *)((char *)a + 12) = 0;
    return 0;
}
