// from server: 92% by atomic.potato
extern "C" void sub_0071C120(void *, void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl sub_007F4929(const void *);

struct S
{
    void f();
};

void S::f()
{
    sub_0071C120((void *)0xB95980, (void *)0x9DF8E0, (void *)0x9D1FDC, 0xD4, 0xF, 0);
    sub_007F4929((const void *)0x987E40);
}
