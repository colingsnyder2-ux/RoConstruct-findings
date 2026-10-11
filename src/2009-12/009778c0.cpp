// from server: 78% by atomic.potato
extern "C" void sub_6f7e80(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl sub_7f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_6f7e80((void *)0xB94848, (void *)0x9DCD54, (void *)0x9D1B80, 0x33C, 2);
    sub_7f4929((void *)0x987160);
}
