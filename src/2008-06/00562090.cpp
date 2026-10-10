// from server: 89% by atomic.potato
extern "C" void __cdecl basic_istringstream_destructor(void *);
extern "C" void __cdecl cleanup_istringstream(void *);

struct S
{
    int f(unsigned char);
};

int S::f(unsigned char flags)
{
    void *p = (char *)this - 0x50;
    basic_istringstream_destructor(p);
    if (flags & 1)
        cleanup_istringstream(p);
    return (int)p;
}
