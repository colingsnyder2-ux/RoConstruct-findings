// from server: 92% by atomic.potato
extern "C" void f00738b20(void *, void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl f007f4929(void *);

struct S {
    void f();
};

void S::f()
{
    f00738b20((void *)0xB96278, (void *)0x9BB1A0, (void *)0x9E1C14, 0x16C, 0x0F, 0);
    f007f4929((void *)0x988710);
}
