// from server: 63% by atomic.potato
extern "C" void G1_func_006cb1d0();

struct ArcHandles
{
    void f(int, int, int);
};

void ArcHandles::f(int a, int, int value)
{
    if (value != 4)
    {
        G1_func_006cb1d0();
        return;
    }

    int* p = (int*)a;
    *p = 0x00bd28e0;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
