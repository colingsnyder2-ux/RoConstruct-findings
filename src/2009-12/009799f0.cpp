// from server: 78% by atomic.potato
extern "C" void f738d90(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl f7f4929(void *);

struct S {
    void f();
};

void S::f()
{
    f738d90((void *)0xb96558, (void *)0x9e1cc0, (void *)0x9e1c14, 0x158, 0xf);
    f7f4929((void *)0x9887f0);
}
