// from server: 63% by atomic.potato
struct S
{
    void __cdecl f(void* a, int b);
};

void __cdecl S::f(void* a, int b)
{
    if (b != 4)
    {
        b = b;
        return;
    }

    *(int*)a = 0x00b18800;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
