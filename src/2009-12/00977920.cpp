// from server: 78% by atomic.potato
extern "C" void f006f7e80(void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl f007f4929(const void *);

struct S {
    void f();
};

void S::f()
{
    f006f7e80((void *)0x00b94b38, (void *)0x009dcd8c,
              0x009d1b80, 0x38c, 2);
    f007f4929((const void *)0x009871a0);
}
