// from server: 82% by atomic.potato
extern "C" void __cdecl g(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        g(b);
        return;
    }

    *(int*)a = 0x00bcb370;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
