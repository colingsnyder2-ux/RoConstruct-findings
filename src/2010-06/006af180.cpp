// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __cdecl target(void *, int);

void __cdecl f(void *a, int b)
{
    if (b != 4)
    {
        target(a, b);
        return;
    }

    *(unsigned long *)a = 0x00BCADB8;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
