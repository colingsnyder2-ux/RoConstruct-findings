// from server: 94% by atomic.potato
extern "C" void __stdcall dispatch(int, int, int);

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        dispatch(a, b, c);
        return;
    }
    *(int*)b = 0xb29e60;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
