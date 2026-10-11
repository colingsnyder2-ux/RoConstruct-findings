// from server: 71% by atomic.potato
extern "C" void sub_006f7e80(void *, void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl sub_007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_006f7e80((void *)0x00b94a84, (void *)0x009dcd74,
                 (void *)0x009d1b80, (void *)0x009d1b80,
                 0x364, 2);
    sub_007f4929((void *)0x00987180);
}
