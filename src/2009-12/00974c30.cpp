// from server: 92% by atomic.potato
extern "C" void sub_006c6770(void *, void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl sub_007f4929(const void *);

struct S
{
    void f();
};

void S::f()
{
    sub_006c6770((void *)0xb92528, (void *)0x9d7430, (void *)0x9d73dc, 0xac, 0xf, 0);
    sub_007f4929((const void *)0x985c20);
}
