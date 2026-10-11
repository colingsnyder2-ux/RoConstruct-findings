// from server: 92% by atomic.potato
extern "C" void sub_006f7e80(void *, void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl sub_007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_006f7e80((void *)0xb94790, (void *)0x9dccc8, (void *)0x9d1b80, 0x274, 2, 0);
    sub_007f4929((void *)0x9870c0);
}
