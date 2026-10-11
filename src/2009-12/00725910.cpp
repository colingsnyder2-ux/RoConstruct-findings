// from server: 70% by atomic.potato
extern "C" void pubimbue(void*, void*);
extern "C" void __cdecl destroy_locale(void*);

struct S
{
    unsigned char pad0[0x8c];
    void* stream;
    unsigned char pad1[0x0c];
    unsigned char flags;
    void f(void*);
};

void S::f(void* locale)
{
    if ((flags & 1) != 0 && stream != 0)
    {
        pubimbue(stream, locale);
        destroy_locale(&locale);
    }
}
