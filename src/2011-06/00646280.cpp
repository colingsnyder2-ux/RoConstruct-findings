// from server: 81% by atomic.potato
struct StarterGuiService
{
    int f(void *, void *);
};

extern void G1_func_006460f0(StarterGuiService *, void *, void *);

int StarterGuiService::f(void *a, void *b)
{
    if (*(unsigned char *)((char *)this + 13) != 0)
    {
        G1_func_006460f0(this, b, b);
        return (int)b;
    }
    *(int *)a = 0;
    *(int *)((char *)a + 4) = 0;
    *(int *)((char *)a + 8) = 0;
    *(int *)((char *)a + 12) = 0;
    return 0;
}
