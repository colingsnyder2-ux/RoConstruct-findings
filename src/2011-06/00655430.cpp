// from server: 91% by atomic.potato
extern "C" void __cdecl leaf_target(void *, unsigned int);

struct S
{
};

void __cdecl f(void *a, unsigned int b)
{
    if (b != 4)
    {
        leaf_target(a, b);
        return;
    }

    *(unsigned int *)a = 0x00c54bc0;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
}
