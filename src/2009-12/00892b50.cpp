// from server: 62% by atomic.potato
extern "C" int __stdcall func_00892b00(void *, void *);

struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    int index = func_00892b00(this, arg);
    if (index != -1)
    {
        struct VTable
        {
            void *pad[72];
            void (*func)(void *, int, int, int);
        };

        ((VTable *)*(void **)this)->func(this, index, 0, 0x402);
    }
    return index;
}
