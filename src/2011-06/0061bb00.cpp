// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __cdecl helper(void *, int);

void __cdecl f(void *a, int b)
{
    if (b != 4)
    {
        helper(a, b);
        return;
    }

    *(unsigned long *)a = 0x00c4a8e8;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
}
