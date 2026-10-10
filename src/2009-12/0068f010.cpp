// from server: 80% by atomic.potato
extern "C" void __cdecl func_0068e230(int);

struct S
{
    void __cdecl f(void* a, int b, int c);
};

void S::f(void* a, int b, int c)
{
    if (c != 4)
    {
        func_0068e230(c);
        return;
    }

    *(int*)a = 0x00b36a58;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
