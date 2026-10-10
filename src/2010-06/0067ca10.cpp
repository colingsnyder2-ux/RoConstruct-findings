// from server: 94% by atomic.potato
extern "C" void __stdcall helper(void*, void*, int);

struct S
{
    void f(void*, void*, int);
};

void S::f(void* a, void* b, int c)
{
    if (c != 4)
    {
        helper(a, b, c);
        return;
    }

    *(unsigned long*)b = 0x00bc1280;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
