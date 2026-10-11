// from server: 92% by atomic.potato
extern "C" void f006c66a0(void *, void *, unsigned int, unsigned int, unsigned int, unsigned int);

extern "C" void __cdecl f007f4929(void *);

struct S {
    void f();
};

void S::f()
{
    f006c66a0((void *)0x00b9249c, (void *)0x009d73f8,
               0x009ad820, 0xa0, 0xf, 0);
    f007f4929((void *)0x00985c00);
}
