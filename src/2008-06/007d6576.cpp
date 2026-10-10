// from server: 28% by atomic.potato
extern "C" void __cdecl func_006a165b(void*, int, int, void*);

struct S_func_007d6576
{
    char pad[0x140];
    void f();
};

void S_func_007d6576::f()
{
    func_006a165b((void*)0x5576e0, 2, 8, pad + 0x140);
}
