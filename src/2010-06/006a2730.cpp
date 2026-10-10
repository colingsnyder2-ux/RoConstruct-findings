// from server: 66% by atomic.potato
struct S
{
    unsigned char pad0[0x48];
    void* value;
    unsigned char pad1[0x0c];
    unsigned char flags;
    void f(void*);
};

extern "C" void* __cdecl call1(void*, void*);
extern "C" void __cdecl call2(void*);

void S::f(void* arg)
{
    if ((flags & 1) != 0 && value != 0)
    {
        void* local = arg;
        call1(value, &local);
        call2(&local);
    }
}
