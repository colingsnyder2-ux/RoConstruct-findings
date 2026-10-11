// from server: 78% by atomic.potato
extern "C" void f0068fa00(void *, void *, void *, int, int);
extern "C" void __cdecl f007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    f0068fa00((void *)0x00b911c0, (void *)0x009d1b5c,
               (void *)0x009d1b80, 0x148, 2);
    f007f4929((void *)0x00985000);
}
