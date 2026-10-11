// from server: 58% by atomic.potato
struct S
{
    char pad8c[0x8c];
    void* p8c;
    char pad9c[0x0c];
    unsigned char flags;
    void f(void*);
};

extern "C" void __stdcall imported_1(void*, void*);
extern "C" void __stdcall imported_2(void*, void*);

void S::f(void* arg)
{
    if ((flags & 1) != 0 && p8c != 0)
    {
        imported_1(&arg, p8c);
        imported_2(&arg, p8c);
    }
}
