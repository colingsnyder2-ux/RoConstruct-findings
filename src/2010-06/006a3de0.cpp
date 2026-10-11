// from server: 72% by atomic.potato
struct S
{
    unsigned char flags[157];
    void* stream;
    void f(void* locale);
};

extern "C" void __cdecl destroy_locale(void*);
extern "C" void __cdecl pubimbue(void*, void*);

void S::f(void* locale)
{
    if ((flags[156] & 1) != 0 && stream != 0)
    {
        pubimbue(stream, &locale);
        destroy_locale(locale);
    }
}
