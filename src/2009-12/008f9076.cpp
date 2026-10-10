// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern void (__cdecl *func_00b6b31c)();

void __declspec(naked) __cdecl func_008f9076()
{
    func_008fb2b4(1);
    func_00b6b31c();
}
