// from server: 65% by atomic.potato
extern "C" void __cdecl target_004e5f60();

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        target_004e5f60();
        return;
    }

    *(int*)b = 0x00b91ff0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
