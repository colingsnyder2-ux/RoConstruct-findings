// from server: 78% by atomic.potato
extern "C" void sub_0074CD50(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl sub_007F4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_0074CD50((void *)0xB97230, (void *)0x9E3EE0, (void *)0x9D1B80, 0x194, 2);
    sub_007F4929((void *)0x989190);
}
