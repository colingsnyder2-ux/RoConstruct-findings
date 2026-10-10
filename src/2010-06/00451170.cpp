// from server: 43% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl target(void*, void*, void*, int);

void S::f()
{
    int value;
    void* p;

    if (value != 4)
    {
        target(0, 0, 0, value);
        return;
    }

    p = 0;
    *(unsigned long*)p = 0x00B822C0;
    *((unsigned char*)p + 4) = 0;
    *((unsigned char*)p + 5) = 0;
}
