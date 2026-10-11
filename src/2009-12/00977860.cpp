// from server: 78% by atomic.potato
extern "C" void f006f7e80(void *, const char *, const char *, int, int);
extern "C" void __cdecl f007f4929(const char *);

struct S
{
    void f();
};

void S::f()
{
    f006f7e80((void *)0x00b946f8, (const char *)0x009dcd1c,
               (const char *)0x009d1b80, 0x2ec, 2);
    f007f4929((const char *)0x00987120);
}
