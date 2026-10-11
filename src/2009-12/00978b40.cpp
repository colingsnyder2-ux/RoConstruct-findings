// from server: 78% by atomic.potato
extern "C" void sub_71c2a0(void *, const char *, const char *, unsigned int, unsigned int);
extern "C" void __cdecl sub_7f4929(const void *);

struct S
{
    void f();
};

void S::f()
{
    sub_71c2a0((void *)0x00b958c0, (const char *)0x009df91c,
               (const char *)0x009d1fdc, 0x154, 0x0f);
    sub_7f4929((const void *)0x00987f00);
}
