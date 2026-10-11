// from server: 78% by atomic.potato
extern "C" void sub_72e7d0(void *, const void *, const void *, unsigned int, unsigned int);
extern "C" void __cdecl sub_7f4929(const void *);

struct S
{
    void f();
};

void S::f()
{
    sub_72e7d0((void *)0xB95E80, (const void *)0x9E0A24,
               (const void *)0x9BB084, 0x9C, 0x0F);
    sub_7f4929((const void *)0x988070);
}
