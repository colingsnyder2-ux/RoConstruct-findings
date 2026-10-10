// from server: 55% by atomic.potato
extern "C" void __cdecl f(int, int, int);

struct S
{
    void f(int, int, int);
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        f(a, b, c);
        return;
    }

    *(int*)b = 0xb10c08;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
