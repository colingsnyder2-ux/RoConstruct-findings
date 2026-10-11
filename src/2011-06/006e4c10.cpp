// from server: 74% by atomic.potato
struct S
{
    char pad0[140];
    void* stream;
    char pad1[12];
    unsigned char flags;
    void f(void*);
};

extern "C" void __stdcall call_00a40714(void*, void*);
extern "C" void __stdcall call_00a4058c(void*);

void S::f(void* arg)
{
    if ((flags & 1) != 0 && stream != 0)
    {
        call_00a40714(stream, arg);
        call_00a4058c(&arg);
    }
}
