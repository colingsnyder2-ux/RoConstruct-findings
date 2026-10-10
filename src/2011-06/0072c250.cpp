// from server: 82% by atomic.potato
extern "C" void __cdecl sub_72af20(int);

struct S
{
    void __cdecl f(void *, int);
};

void S::f(void *a, int b)
{
    if (b != 4)
    {
        sub_72af20(b);
        return;
    }

    ((void **)a)[0] = (void *)0x00c873b0;
    ((char *)a)[4] = 0;
    ((char *)a)[5] = 0;
}
