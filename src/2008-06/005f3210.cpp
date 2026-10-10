// from server: 63% by atomic.potato
extern "C" void locale_destructor(void *);
extern "C" void streambuf_pubimbue(void *, void *);

struct S
{
    unsigned char pad[0x44];
    void *value44;
    unsigned char pad2[0x0c];
    unsigned char flags;
    void f(void *);
};

void S::f(void *arg)
{
    if ((flags & 1) != 0 && value44 != 0)
    {
        streambuf_pubimbue(value44, &arg);
        locale_destructor(&arg);
    }
}
