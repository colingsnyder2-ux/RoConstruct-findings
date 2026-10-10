// from server: 65% by atomic.potato
extern "C" void __cdecl FactoryProductDispatch();

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        FactoryProductDispatch();
        return;
    }

    *(int*)b = 0x00b3cf68;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
