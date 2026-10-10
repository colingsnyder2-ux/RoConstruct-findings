// from server: 65% by atomic.potato
extern "C" void __cdecl func_006a165b(void *, int, int, const void *);

struct S_func_007d65b6
{
    char pad[0x140];
    void f();
};

void S_func_007d65b6::f()
{
    func_006a165b((char *)this + 0x140, 8, 2, (const void *)0x5576e0);
}
