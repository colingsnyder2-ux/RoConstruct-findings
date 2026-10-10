// from server: 43% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl helper(int, int, int);

void S::f()
{
    int value;
    int *p;

    if (value != 4)
    {
        helper(0, 0, value);
        return;
    }

    p[0] = 0x00c51600;
    p[1] = 0;
}
