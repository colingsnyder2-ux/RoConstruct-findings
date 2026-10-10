// from server: 82% by atomic.potato
extern "C" void __cdecl function_72b630(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        function_72b630(b);
        return;
    }

    *(int*)a = 0x00c874d0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
