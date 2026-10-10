// from server: 63% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        a = b;
        return;
    }

    *(int*)a = 0x00b39800;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
