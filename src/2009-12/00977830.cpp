// from server: 80% by atomic.potato
extern "C" void Function6F7E80(void *, void *, void *, int, int, int);
extern "C" void __cdecl Function7F4929(void *);

struct S {
    void f();
};

void S::f()
{
    Function6F7E80((void *)0x9dcd00, (void *)0x9d1b80, (void *)0x2c4, 2, 0, 0xb94a64);
    Function7F4929((void *)0x987100);
}
