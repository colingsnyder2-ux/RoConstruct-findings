// from server: 60% by atomic.potato
extern "C" void Function748F50(void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl Function7F4929(void *);

struct S {
    void f();
};

void S::f()
{
    Function748F50((void *)0xB96F84, (void *)0x9E3EC0, (unsigned int)0x9D1B80, 0x16, 2);
    Function7F4929((void *)0x988F70);
}
