// from server: 65% by atomic.potato
struct S
{
    void f(int, int, int);
};

extern "C" void __cdecl func_006cb4d0();

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        func_006cb4d0();
        return;
    }

    *(int*)b = 0x00bd2f90;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
