// from server: 73% by atomic.potato
extern "C" void fn_748f50(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl fn_7f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    fn_748f50((void *)0x9e3e88, (void *)0x9d1b80, 0, 2, 0);
    fn_7f4929((void *)0x988f30);
}
