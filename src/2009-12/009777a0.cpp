// from server: 78% by atomic.potato
extern "C" void f006f7e80(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl f007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    f006f7e80((void *)0xb948cc, (void *)0x9dccb4, (void *)0x9d1b80, 0x24c, 2);
    f007f4929((void *)0x9870a0);
}
