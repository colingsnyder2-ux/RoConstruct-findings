// from server: 63% by atomic.potato
extern "C" void __cdecl func_006a165b(void *, int, int, void *);

struct seg_007d0000
{
    void f();
};

void seg_007d0000::f()
{
    func_006a165b((char *)this + 12, 24, 4, (void *)0x67fb10);
}
