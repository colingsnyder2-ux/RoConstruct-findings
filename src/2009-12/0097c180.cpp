// from server: 92% by atomic.potato
extern "C" void f0076eb70(void *, void *, void *, int, int, int);
extern "C" void __cdecl f007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    f0076eb70((void *)0xB9853C, (void *)0x9E8A4C, (void *)0x9D1B80, 0x1F4, 2, 0);
    f007f4929((void *)0x989E30);
}
