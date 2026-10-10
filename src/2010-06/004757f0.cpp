// from server: 58% by atomic.potato
extern "C" void __cdecl continuation(void*, void*);

struct S
{
    void f(void*, int);
};

void S::f(void* p, int value)
{
    if (value != 4)
    {
        continuation(p, this);
        return;
    }

    *(unsigned long*)p = 0x00b852e8UL;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
