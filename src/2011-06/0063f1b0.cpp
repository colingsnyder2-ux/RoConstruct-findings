// from server: 50% by atomic.potato
extern "C" void __cdecl target(int, int);

struct S
{
    void f();
};

void S::f()
{
    int value;
    if (value != 4)
    {
        target(0, value);
        return;
    }

    value = 0;
    *(int*)value = 0xc51588;
    *((char*)value + 4) = 0;
    *((char*)value + 5) = 0;
}
