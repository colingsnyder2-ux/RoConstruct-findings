// from server: 73% by atomic.potato
extern "C" void __cdecl function_76eb70(void *, void *, int, int, int);
extern "C" void __cdecl function_7f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    function_76eb70((void *)0x9e8a90, (void *)0x9d1b80, 0x294, 2, 0);
    function_7f4929((void *)0x989eb0);
}
